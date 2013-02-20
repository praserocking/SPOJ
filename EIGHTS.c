#include<stdio.h>
unsigned long long k,temp;
int main()
{
        int t;
        scanf("%d",&t);
        while(t--)
        {
        scanf("%llu",&k);
        temp=(k-1)*250+192;
        printf("%llu\n",temp);
        }
        return 0;
}
 


