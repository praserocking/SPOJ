#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
 int x;
  double k,n0,n1,t,n;
	cin>>x;
	for(int i=1;i<=x;i++){
		cin>>n0>>n1>>t>>n;
		k=(log(n1/n0)/t);
		printf("Scenario #%d: %.2f\n",i,log(n/n0)/k);
	}
	return 0;
}
