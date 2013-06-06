#include<iostream>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
	unsigned long int a,b,n,m,t,sum,tmp;
	cin>>t;
	while(t--)
	{
		sum=0;
		cin>>a>>b>>n>>m;
		while(n--)
		{
			sum+=a;
			tmp=b;
			b=a+b;
			a=tmp;
		}
		cout<<sum%m<<endl;
	}
	return 0;
	
}
