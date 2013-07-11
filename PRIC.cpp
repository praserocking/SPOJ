#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int f(int num)
{if(num<=1)return 0;
if(num==2)return 1;
if(num%2==0)return 0;
int r=sqrt(num*1.0);
for(int i=3;i<=r;i+=2)
{if(num%i==0)return 0;}
return 1;}
int main(){
int b=1,i=0;
do{if(f(b))cout<<'1';else cout<<'0';
b=(b+1234567890)%2147483648;if(i==254321)break;i++;}while(1);
return 0;}



