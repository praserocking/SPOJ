#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
  vector<int> a;
	int n,f,need,tmp,cnt,i,tot;
	cin>>n;
	for(int j=0;j<n;j++)
	{
		cin>>need;
		cin>>f;
		for(i=0;i<f;i++)
		{
			cin>>tmp;
			a.push_back(tmp);
		}
		sort(a.begin(),a.end());
		reverse(a.begin(),a.end());
		cnt=0;i=0;tot=0;
		while(tot<need && i<f)
		{
			tot+=a[i];
			i++;
			cnt++;
		}
		if(tot<need)
		cout<<"Scenario #"<<j+1<<":\n"<<"impossible"<<endl;
		else
		cout<<"Scenario #"<<j+1<<":\n"<<cnt<<endl;
		a.clear();
	}
}
