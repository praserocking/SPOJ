/* Running time: 0.23secs 5th best timming --->http://www.spoj.com/ranks/MYQ1/<--- */
#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cmath>
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
inline int fast_int()
{
int n=0;
int ch=getchar_unlocked();
while(ch<48)ch=getchar_unlocked();
while(ch >47)
n=(n<<3)+(n<<1)+ch-'0',ch=getchar_unlocked();
return n;
}
/* CODER: prassi */
/* B.Tech,IT.,SASTRA University,Tanjore. */
int main(){
  int n,t,r;
	t=fast_int();
	while(t--){
		n=fast_int();
		r=(n+3)/5;
		if(n==1){
			put("poor conductor\n");
			continue;
		}else
		if(n%10==1 || n%10==2){
			put("%d W L\n",r);
		}else
		if(n%10==0 || n%10==3){
			put("%d A L\n",r);
		}else
		if(n%10==4 || n%10==9){
			put("%d A R\n",r);
		}else
		if(n%10==5 || n%10==8){
			put("%d M R\n",r);
		}else
		if(n%10==6 || n%10==7){
			put("%d W R\n",r);
		}
	}
return 0;}
