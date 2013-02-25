#include<iostream>
using namespace std;
int main()
{
  unsigned long long a=1,b=2,c=3,tmp;int i=97;
	cout<<a<<endl<<b<<endl<<c<<endl;
	while(i--)
	{
		tmp=a+c;
		cout<<tmp<<endl;
		a=b;b=c;c=tmp;
	}
	return 0;
}
