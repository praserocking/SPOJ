#include<cstdio>
#include<vector>
using namespace std;
int main()
{
  vector<int> a;
	int tmp,i=0;
	do
	{
		scanf("%d",&tmp);
		a.push_back(tmp);
	}while(tmp!=42);
	scanf("%d",&tmp);
	while(a[i]!=42)
	{
		printf("%d\n",a[i]);
		i++;
	}
	
	return 0;
}


