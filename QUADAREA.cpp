#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cmath>
#include<ctime>
#include<cstdlib>
#include<queue>
#include<cstring>
#include<cctype>
#define mn(a,b) a>b?b:a
#define loop(n,i) for(int i=0;i<n;i++)
#define mx(a,b) a>b?a:b
#define PI 3.14159
#define put printf
#define get scanf
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
int main(){
  int _;
	double a,b,c,d,ans,s;
	get("%d",&_);
	while(_--){
		get("%lf%lf%lf%lf",&a,&b,&c,&d);
		s=(a+b+c+d)/2;
		ans=sqrt((s-a)*(s-b)*(s-c)*(s-d));
		put("%.2lf\n",ans);
	}
return 0;}

