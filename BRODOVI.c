#include<stdio.h>
inline int fast_int(){
int n=0;
int ch=getchar_unlocked();
while(ch<48)ch=getchar_unlocked();
while(ch >47)
n=(n<<3)+(n<<1)+ch-'0',ch=getchar_unlocked();
return n;
}
int main(){
    int n;
    n=fast_int();
    int a[n],i,j,k;
    for(i=0;i<n;i++){
        a[i]=fast_int();
        --a[i];
    }
    int dp[n];
    memset(dp,0,sizeof(dp));
    int x=0;
    for(i=1;i<n;i++){
        if(!dp[i]){
            for(j=i,k=a[i];j<n;j++){
                if(a[j]==k){
                    dp[j]=1;
                    k+=a[i];
                }
            }      
            x++;
        }
    }
    printf("%d\n",x);   
return 0;}
