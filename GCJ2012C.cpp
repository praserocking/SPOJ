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
  int T=fast_int();
	for(int t=1;t<=T;t++){
		int A=fast_int(),B=fast_int();
		int D=0,W=1; for(int k=A;k;k/=10)D++,W*=10;
		D--,W/=10;
		int ans=0;
		int cand[6];int cs;
		for(int n=A;n<=B;n++){
			int m=n;cs=0;
			for(int d=0;d<D;d++){
				m=(m%W)*10+m/W;
				if(m<A)continue;
				if(m>B)continue;
				if(n>=m)continue;
				cand[cs++]=m;
			}
			sort(cand,cand+cs);
			int ds=unique(cand,cand+cs)-cand;
			ans+=ds;			
		}
	put("Case #%d: %d\n",t,ans);
	}
return 0;}
