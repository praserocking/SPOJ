/* 18th best timing: 0.04secs */
#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
inline int fast_int()
{
int n=0;
int ch=getchar_unlocked();
while(ch<48)ch=getchar_unlocked();
while(ch >47)
n=(n<<3)+(n<<1)+ch-'0',ch=getchar_unlocked();
return n;
}
/* CODER: prassi */
/* B.Tech,IT.,SASTRA University,Tanjore. */
int main(){
	vector<int> a;
	int n,f,need,tmp,cnt,i,tot;
	n=fast_int();
	for(int j=0;j<n;j++)
	{
		need=fast_int();
		f=fast_int();
		for(i=0;i<f;i++)
		{
			tmp=fast_int();
			a.push_back(tmp);
		}
		sort(a.begin(),a.end());
		reverse(a.begin(),a.end());
		cnt=0;i=0;tot=0;
		while(tot<need && i<f)
		{
			tot+=a[i];
			i++;
			cnt++;
		}
		if(tot<need)
		printf("Scenario #%d:\nimpossible\n",j+1);
		else
		printf("Scenario #%d:\n%d\n",j+1,cnt);
		a.clear();
	}
return 0;}

