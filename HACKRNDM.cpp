#define loop(n,i) for(i=0;i<n;i++)
#include<algorithm>
#define put printf
#define get scanf
#include<stdio.h>
typedef long long int ll;
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
  ll n,k,cnt=0;
	register int i;
    n=fast_int();
    k=fast_int();
    ll a[n];
    loop(n,i)
        a[i]=fast_int();
    sort(a,a+n);
    loop(n,i)
        if (binary_search(a,a+n,a[i]+k))
            cnt++;
    put("%lld",cnt);
return 0;}


