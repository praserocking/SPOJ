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
	unsigned long long int ans;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&d);
		ans=fun(d);
		printf("%lld\n",ans);
	}
	return 0;
}
