#include<stdio.h> //one of the uses of bit-wise Ex-Or
int main() 
{
  long long n,num=0, k;
	scanf("%lld",&n);
	while(n--)
	{
		scanf("%lld",&k);
		num ^= k;
	}
	printf("%lld\n",num);
	return 0;
}

