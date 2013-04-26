#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cctype>
#define mn(a,b) a>b?b:a
#define loop(i,n) for(i=0;i<n;i++)
#define mx(a,b) a>b?a:b
#define PI 3.14159
#define start int main()
#define put printf
#define get scanf
#define end return 0
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
/* CODER: prassi */
/* If its hard to write, it should be hard to read.. */
start
{
  vector<int> a,b,c,d;
	int t,i,j,k,l,x,cnt=0;
	get("%d",&t);
	loop(i,t)
	{
		get("%d",&x);
		a.push_back(x);
		get("%d",&x);
		b.push_back(x);
		get("%d",&x);
		c.push_back(x);
		get("%d",&x);
		d.push_back(x);
	}	
	loop(i,t)
	loop(j,t)
	loop(k,t)
	loop(l,t)
	{
		if(a[i]+b[j]+c[k]+d[l]==0)
		cnt++;
	}
	put("%d",cnt);
end;
}
