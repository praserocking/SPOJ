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
int a[1000000],cnt[10];
int main(){
  int test,i,j,k,n;
	test=fast_int();
	while(test--) {
		n=fast_int();
		for(i=0;i<n;i++)a[i]=fast_int();
		memset(cnt,0,sizeof(int)*10);
		for(i=n-1;i>=0;i--){
			cnt[a[i]]++;
			for(j=a[i]+1;j<10;j++)if(cnt[j])break;
			if(j<10){
				a[i]=j;cnt[j]--;
				for(j=0,k=i+1;j<10;j++)while(cnt[j]--)a[k++]=j;
				break;
			}
		}
		if(i>=0){
			for(i=0;i<n;i++)printf("%d",a[i]);
			printf("\n");
		}
		else printf("-1\n");
	}
return 0;}
