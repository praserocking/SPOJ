#include<stdio.h>
#include<algorithm>
inline int fast_int()
{
int n=0;
int ch=getchar_unlocked();
while(ch<48)ch=getchar_unlocked();
while(ch >47)
n=(n<<3)+(n<<1)+ch-'0',ch=getchar_unlocked();
return n;
}
int main(){
  int a[201][201],b[9];
	int w,h,p,t;
	t=fast_int();
	while(t--){
		p=fast_int();
		h=fast_int();
		w=fast_int();
		for(int i=0;i<h;i++)
		for(int j=0;j<w;j++){
			a[i][j]=fast_int();
		}
		for(int i=1;i<h-1;i++)
		for(int j=1;j<w-1;j++){
			b[0]=a[i-1][j-1];
			b[1]=a[i-1][j];
			b[2]=a[i-1][j+1];
			b[3]=a[i][j+1];
			b[4]=a[i+1][j+1];
			b[5]=a[i+1][j];
			b[6]=a[i+1][j-1];
			b[7]=a[i][j-1];
			b[8]=a[i][j];
			std::sort(b,b+9);
			a[i][j]=b[4];
		}
		printf("%d %d\n",h,w);
		for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			printf(" %d",a[i][j]);
		}
		printf("\n");
		}
	}
}
