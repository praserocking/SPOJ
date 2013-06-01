#include<string.h>
#include<stdio.h>
int main()
{
char a[20];
int b,i,t=10;
while(t--)
{
scanf("%s",a);
b=1;
for(i=0;i<strlen(a);i++)
{
if(a[i]=='T'||a[i]=='D'||a[i]=='L'||a[i]=='F')
b*=2;
}
printf("%d\n",b);
}
return 0;
}


