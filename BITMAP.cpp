/* CODER: prassi */
/* B.Tech,IT.,SASTRA University,Tanjore. */
#include<queue>
#include<utility>
#include<cstdio>
#include<stdlib.h>
#include<cmath>
#include<climits>
#define loop(n,i) for(int i=0;i<n;i++)
#define put printf
#define get scanf
#define mp make_pair
using namespace std;
typedef pair<int,int> PII;
int ans[200][200],t,r,c;
char pixel[200][200];
queue<PII>q;
bool fine(int i,int j){
	return ((i<r&&i>=0)&&(j<c&&j>=0))?true:false;
}
void bfs(PII strt){
	PII tmp;int k,l,d;
	q.push(strt);
	while(!q.empty()){
		tmp=q.front();
		q.pop();
		for(k=tmp.first-1;k<=tmp.first+1;k++)
		for(l=tmp.second-1;l<=tmp.second+1;l++){
			if(fine(k,l)){
				d=abs(k-strt.first)+abs(l-strt.second);
				if(ans[k][l]>d){
					ans[k][l]=d;
					q.push(mp(k,l));	
				}
			}
		}
	}
}
int main(){
	get("%d",&t);
	while(t--){
		get("%d %d",&r,&c);
		loop(r,i)get("%s",pixel[i]);
		loop(r,i)loop(c,j)ans[i][j]=pixel[i][j]=='0'?INT_MAX:0;
		loop(r,i)loop(c,j)if(pixel[i][j]=='1')bfs(mp(i,j));
		loop(r,i){
			loop(c,j)put("%d ",ans[i][j]);put("\n");
		}
	}
	return 0;
}
