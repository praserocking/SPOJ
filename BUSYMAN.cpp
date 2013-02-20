#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct a
{
  int strt,end;
};
int cc (a x)
{
	
}
int fun(a x[])
{
	int sum=0;
	for(int i=0;i<m;i++)
	{
		sum=cc(x[i]);
	}
}
int main()
{
	int m,n,sum,top;
vector<a> x;
a tmp;
cin>>n;
while(n--)
{
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>tmp.strt>>tmp.end;
		x.push_back(tmp);
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m-i;j++)
		{
			if(x[j].end>x[j+1].end)
			{
				tmp=x[i];
				x[i]=x[j];
				x[j]=tmp;
			}
		}
	}
    cout<<fun(x);
	}
}	
}
