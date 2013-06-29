#include<stdio.h>
#define put printf
#define get scanf
typedef long long int ll;
/* CODER: prassi */
/* B.Tech,IT.,SASTRA University,Tanjore. */
int a[1000000];
int main()
{ll n,m,sum;get("%lld%lld",&n,&m);ll max=0,i;for(i=0;i<n;i++){get("%d",&a[i]);max=(max>a[i])?max:a[i];}
ll beg=0,end=max,mid;while(beg<=end){mid=(beg+end)/2;sum=0;for(i=0;i<n;i++){if(a[i]>mid)sum+=(a[i]-mid);}if(sum==m)		
break;else if(sum>m)beg=mid+1;else end=mid-1;}put("%lld\n",mid);return 0;}

