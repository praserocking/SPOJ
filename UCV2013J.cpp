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
template <class type>type fact(type n){return n==1?1:fact(n-1)*n;}
template <class type>type gcd(type a,type b){return b==0?a:gcd(b,a%b);}
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
typedef vector<int> VI;
typedef pair<int,int> PII;
typedef vector<VI> VVI;
typedef vector<vector<PII> > VVP;
/***********Fast Input of Int***********************/
inline int fast_int(){
int n=0;
int ch=getchar_unlocked();
while(ch<48)
	ch=getchar_unlocked();
while(ch>47)
	n=(n<<3)+(n<<1)+ch-'0',ch=getchar_unlocked();
return n;
}
/**********Its My code***************************/
int a[10000000],ans=0;
void mycode(){
	int t=fast_int();
	memset(a,-1,sizeof(a));
	while(t!=0){
		loop(t,i)a[i]=fast_int();
		for(int i=t/2;i<t;i++){
			ans+=a[i];
		}
		put("%d\n",ans);
		ans=0;
		t=fast_int();
	}
}
/************************************************/
int main(){
mycode();
return 0;}
