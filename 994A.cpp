#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,i,j;
	cin>>n>>m;
	vector<int> an(n),am(m),a;
	for(i=0;i<n;i++)
		cin>>an[i];
	for(i=0;i<m;i++)
		cin>>am[i];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(an[i]==am[j])
				a.push_back(an[i]);
		}
	}
	int l=a.size();
	if(l>0)
	{
		for(i=0;i<l;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
	else
		cout<<endl;
	return 0;
}