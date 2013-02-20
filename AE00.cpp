#include<iostream>
using namespace std;
int fun(unsigned long long n)
{
  if(n%10==8)
	n=n/10;
	else
	return 0;
	if(n%10==8)
	n/=10;
	else
	return 0;
	if(n%10==8)
	return 1;
	else return 0;
}
int main()
{
	int t,cnt;
	unsigned long long n,g;
	cin>>cnt;
	while(cnt--)
	{
	cin>>n;
	while(1)
	{
		g=n*n*n;
	t=fun(g);
	if(t==1)
	{
	cout<<n<<endl;
	break;
	}
	n++;
	}
	}
	return 0;
}
