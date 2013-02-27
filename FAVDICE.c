#include<stdio.h>
int main()
{
    int t,num,i;
    double ans,k;
    scanf("%d",&t);
    while(t--)
    {
        ans=0.0;
        scanf("%d",&num);
        k=num;
        for(i=1;i<=num;i++)
        {
          ans=ans+num/k;
        	k--;
        }
        printf("%.2lf\n",ans);
    }
    return 0;
    
}
