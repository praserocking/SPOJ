#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  vector<int>a,b;
	int tmp,n,p,sum;
	cin>>n;
	while(n--)
	{
		cin>>p;
		for(int i=0;i<p;i++)
		{
			cin>>tmp;
			a.push_back(tmp);
		}
		for(int i=0;i<p;i++)
		{
			cin>>tmp;
			b.push_back(tmp);
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		sum=0;
		for(int i=0;i<p;i++)
		{
			sum+=(a[i]*b[i]);
		}
		cout<<sum<<endl;
		a.clear();
		b.clear();
	}
	return 0;
}
