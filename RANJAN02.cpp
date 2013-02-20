#include<stdio.h>
unsigned long long int fun(unsigned long long int n)
{
  if(n==1)
	return 2;
	else
	return 3*fun(n-1)+2;
}
int main()
{
	int n,d;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&d);
		printf("%lld\n",fun(d));
	}
	return 0;
}
