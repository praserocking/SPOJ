#include<stdio.h>
static int a[26];
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
	int flag=0;
	register int i,t;
	char name[31];
	t=fast_int();
	while(t--){
		scanf("%s",name);
		a[name[0]-97]++;
	}
	for(i=0;i<26;i++){
		if(a[i]>=5){
			printf("%c",i+97);
			flag=1;
		}
	}
	if(flag==0)printf("PREDAJA");
	return 0;
}
