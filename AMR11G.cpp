#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cctype>
#define mn(a,b) a>b?b:a
#define loop(i,n) for(i=0;i<n;i++)
#define mx(a,b) a>b?a:b
#define PI 3.14159
#define start int main()
#define put printf
#define get scanf
#define end return 0
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
/* CODER: prassi */
/* If its hard to write, it should be hard to read.. */
start
{
  char a[50];
	int t,i;
	get("%d",&t);
	loop(i,t)
	{
		get("%s",a);
		if(!strstr(a,"D"))
			put("Possible\n");
		else
			put("You shall not pass!\n");
	}
	end;
}
