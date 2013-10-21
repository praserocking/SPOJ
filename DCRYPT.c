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
	int t,key,i,tmp;
	char a[100005];
	t=fast_int();
	while(t--){
		key=fast_int();
		scanf("%s",a);
		if(key<26){
			for(i=0;a[i]!='\0';i++){
				tmp=a[i];
				if(tmp>=65&&tmp<=90){
					tmp-=65;
					tmp=(tmp+key)%26;
					tmp+=65;
				}else if(tmp>=97&&tmp<=122){
					tmp-=97;
					tmp=(tmp+key)%26;
					tmp+=97;
				}else{
					tmp=32;
				}
				a[i]=tmp;
			}
		}else{
			key-=26;
			for(i=0;a[i]!='\0';i++){
				tmp=a[i];
				if(tmp>=65&&tmp<=90){
					tmp-=65;
					tmp=(tmp+key)%26;
					tmp+=97;
				}else if(tmp>=97&&tmp<=122){
					tmp-=97;
					tmp=(tmp+key)%26;
					tmp+=65;
				}else{
					tmp=32;
				}
				a[i]=tmp;
			}
		}
		printf("%s\n",a);
	}
}




