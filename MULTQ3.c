#include<stdio.h>
int main()
{
  int x[100000];
	int n,a,b,s,c,i;
	scanf("%d",&s);
	while(s--)
	x[i]=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %d %d",&s,&a,&b);
		if(s==0)
		{
			for(i=a;i<=b;i++)
			x[i]+=1;
		}
		else
		{
			c=0;
			for(i=a;i<=b;i++)
			if(x[i]%3==0)c++;
			printf("%d\n",c);
		}
	}
	return 0;
}
