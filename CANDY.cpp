#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int> a;
int n,tmp,sum,cnt;
cin>>n;
while(n!=-1)
	{
		sum=0;
		cnt=0;
		for(int i=0;i<n;i++)
		{
			cin>>tmp;
			a.push_back(tmp);
			sum+=tmp;
		}
		if(sum%n==0)
		{
			for(int i=0;i<a.size();i++)
			{
				while(a[i]>(sum/n))
				{
					cnt++;
					a[i]--;
				}
			}
		cout<<cnt<<endl;
		}
		else
			cout<<"-1"<<endl;
	a.clear();
	cin>>n;
	}
return 0;
}

