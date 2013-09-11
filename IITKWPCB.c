#include<stdio.h>
#include<math.h>
typedef unsigned long long  ull;
ull gcd(ull a,ull b){
	return b==0?a:gcd(b,a%b);
}
int main(){
	int t;
	ull n,test;
	scanf("%d",&t);
	while(t--){
		scanf("%lld",&n);
		test=floor((double)n/2.0);
		if(n==1){
			printf("0\n");
			continue;	
		}
		else{
			while(gcd(test,n)!=1){
				test--;
			}
			printf("%lld\n",test);
		}
	}
	return 0;
}
