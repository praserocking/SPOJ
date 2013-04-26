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
  int t,n,i;
	get("%d",&t);
	loop(i,t)
	{
		get("%d",&n);
		put("%d\n",mx(0,n-2));
	}
end;
}
