#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,i,j;
	cin>>n>>m;
	string a,b,s;
	vector<pair<string,string>> v;
	for(i=0;i<m;i++)
	{
        cin>>a>>b;
        v.push_back(make_pair(a,b));
	}
	vector<string> v1;
	for(i=0;i<n;i++)
		cin>>v1[i];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(v1[i]==v[j].first)
		{
			string x=v[j].first,y=v[j].second;
			if(x.size()>= y.size())
				cout<<v[j].first<<" ";
			else
				cout<<v[j].second<<" ";
		}
		}
		
	}
	cout<<endl;
	return 0;
}