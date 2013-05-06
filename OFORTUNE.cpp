#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<queue>
#include<cstring>
#include<cctype>
#include<string>
#define mn(a,b) a>b?b:a
#define loop(n,i) for(int i=0;i<n;i++)
#define mx(a,b) a>b?a:b
#define PI 3.14159
#define put printf
#define get scanf
#define start int main
#define end return 0;
#define all(a) a.begin(),a.end()
#define iter vector<int>::iterator
#define szf sizeof
#define setfiles freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
template <class type>type fact(type n){return n==1?1:fact(n-1)*n;}
template <class type>type gcd(type a,type b){return b==0?a:gcd(b,a%b);}
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
/* CODER: prassi */
/* B.Tech,IT.,SASTRA University,Tanjore. */
double O_o(int _,int __,double ___)
{
  double ____=pow(1+___,__);
	____*=_;
	return ____;
}
double o_O(int _,int __,double ___)
{
	return _*__*___+_;
}
start(){
setfiles
   double r,big;
   char o;
   int p,n,t,i,_,ch;
   get("%d",&t);
   while(t--)
   {
		get("%d %d %d",&p,&n,&_);
		big=0.0;
		while(_--)
		{
			get("%d %lf %d",&o,&r,&ch);
			switch(o)
			{
				case 0:if(o_O(p,n,r)-ch>=big)
							big=o_O(p,n,r)-ch;
							break;
				case 1:if(O_o(p,n,r)-ch>=big)
							big=O_o(p,n,r)-ch;
							break;
			}
		}
		put("%d\n",(int)big);
   }
end
}

