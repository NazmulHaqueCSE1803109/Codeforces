#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		vector<int> a(n);
		for(i=0;i<n;i++)
			cin>>a[i];
		vector<pair<int,int>> p;
		for(i=0;i<n;i++)
		{
			p.push_back(make_pair(a[i],i));
		}
		sort(p.rbegin(),p.rend());
		vector<int> v;
		for(i=0;i<)
	
	}
	return 0;
}