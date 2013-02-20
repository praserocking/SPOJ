#include<iostream>
using namespace std;
int fun(int n)
{
  if(n==1)
	return 1;
	else if(n>1)
	return (fun(n-1)+(n*n));
}
int main()
{
	int a;
	while(1)
	{
	cin>>a;
	if(a==0)
	break;
	cout<<fun(a)<<endl;
	}
	return 0;
}

