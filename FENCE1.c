#include<stdio.h>
#define pi 3.141592653589793238462643383279
int main()
{
        double a;
        scanf("%lf",&a);
        while(a!=0)
        {
        printf("%.2lf\n",(a*a)/(2.0*pi));
        scanf("%lf",&a);
        }
        return 0;
}
