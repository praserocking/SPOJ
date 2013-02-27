#include<stack>
#include<cstdio>
using namespace std;
int main()
{
  int n,i,p,a[1001];
	while(scanf("%d",&n)==1 && n)
	{
		stack<int> S;
		p=1;
		for(i=0;i<n;i++) 
		scanf("%d",&a[i]);
		S.push(a[0]);
		for(i=1;i<n;i++)
		{
			while(!S.empty()&&a[i]>S.top()&&S.top()==p++)
			S.pop();
			S.push(a[i]);
		}
		while(!S.empty()&&S.top()==p++)
		S.pop();
		if(S.empty())
		printf("yes\n");
		else
		printf("no\n");
	}
	return 0;
}
