#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
	double ans,r,n;
	while(1){
		cin>>r>>n;
		if(r==0&&n==0)break;
		ans=r/sin(acos(-1)*0.5/n);
		printf("%.2f\n",ans);
	}
	return 0;
}
