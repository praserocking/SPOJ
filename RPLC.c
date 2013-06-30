#include<stdio.h>
/* CODER: prassi */
/* B.Tech,IT.,SASTRA University,Tanjore. */
int main(){
  long long int t,n,a,lf,ans,i;
	scanf("%lld",&t);
	for(i=1;i<=t;i++){
		scanf("%lld",&n);
		lf=1;
		ans=1;
		while(n--){
			scanf("%lld",&a);
			lf+=a;
			if(lf<= 0){
				ans+=(lf*-1)+1;
				lf+=(lf*-1)+1;
			}
		}
		printf("Scenario #%lld: %lld\n",i,ans);
	}
return 0;}
