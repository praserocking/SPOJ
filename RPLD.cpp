#include<iostream>
using namespace std;
int main(){
  struct set{int f,s;};
	int q;
	cin>>q;
	for(int x=1;x<=q;x++){
	int t,flag=0,n;
	set a[100055];
	cin>>n>>t;
	for(int i=0;i<t;i++){
		cin>>a[i].f>>a[i].s;
	}
	for(int i=0;i<t-1;i++){
		for(int j=i+1;j<t;j++){
			if(a[i].f==a[j].f && a[i].s==a[j].s){
				flag=1;
				break;
			}
			}
			if(flag==1)
				break;
	}
	if(flag==1)
		cout<<"Scenario #"<<x<<": impossible"<<endl;
	else
		cout<<"Scenario #"<<x<<": possible"<<endl;
	}
	return 0;
}


