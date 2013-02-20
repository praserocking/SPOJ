#include<stdio.h>
int rev(int n)
{
  int k=0,cnt=0;
	while(n)
	{
		if(cnt==1)
		{
			k=(k*10)+(n%10);
		}
		else
		if(n%10!=0)
		{
		k=(k*10)+(n%10);
		cnt=1;
		}
		n=n/10;
	}
	return k;
}
int main()
{
	int a,b,n,tmp;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %d",&a,&b);
		tmp=rev(a)+rev(b);
		printf("%d\n",rev(tmp));
	}
	return 0;
}


