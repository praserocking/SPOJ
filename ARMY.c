#include<stdio.h>
inline int fast_int(){
int n=0;
int ch=getchar_unlocked();
while(ch<48)
	ch=getchar_unlocked();
while(ch>47)
	n=(n<<3)+(n<<1)+ch-'0',ch=getchar_unlocked();
return n;
}
int main(){
	int t,g,m,i,x,y;
	t=fast_int();
	while(t--){
		g=fast_int();m=fast_int();
		int gd[g],md[m];
		for(i=0;i<g;i++)gd[i]=fast_int();
		for(i=0;i<m;i++)md[i]=fast_int();
		x=gd[0];y=md[0];
		for(i=1;i<g;i++)if(x<gd[i])x=gd[i];
		for(i=1;i<m;i++)if(y<md[i])y=md[i];
		if(x>=y)printf("Godzilla\n");else printf("MechaGodzilla\n");
	}
	return 0;
}
