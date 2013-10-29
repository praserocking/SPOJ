/* CODER: prassi */
/* B.Tech,IT.,SASTRA University,Tanjore. */
#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<map>
#include<bitset>
#include<stack>
#include<queue>
#include<set>

#include<cstdio>
#include<cmath>
#include<ctime>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<climits>

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
#define pb push_back
#define mp make_pair
#define tr(c,i) for(typeof((c).begin())i=(c).begin();i!=(c).end();i++)

template <class type>type fact(type n){return n==1?1:fact(n-1)*n;}
template <class type>type gcd(type a,type b){return b==0?a:gcd(b,a%b);}

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> VI;
typedef pair<int,int> PII;
typedef vector<VI> VVI;
typedef vector<vector<PII> > VVP;

inline int fast_int(){
	int n=0;
	int ch=getchar_unlocked();
	while(ch<48)ch=getchar_unlocked();
	while(ch >47)n=(n<<3)+(n<<1)+ch-'0',ch=getchar_unlocked();
	return n;
}

int main(){
	int t=fast_int(),a,b,n,ans;
	while(t--){
		a=fast_int();b=fast_int();
		n=a>b?gcd(a,b):gcd(b,a);ans=0;
		for(int i=1;i*i<=n;i++){
			if(n%i==0){
				ans+=2;
				if(i==n/i)ans--;
			}
		}
		put("%d\n",ans);
	}
}
