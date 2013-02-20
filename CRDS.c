#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    long long n;
    while(t--)
    {
        scanf("%lld",&n);
        n=n*(3*n+1)/2;
        n%=1000007;
        printf("%lld\n",n);

    }


    return 0;
}


