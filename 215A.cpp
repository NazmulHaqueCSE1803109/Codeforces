#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,i,j,cnt=0;
	cin>>n;
	vector<int> a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	cin>>m;
	vector<int> b(m);
	for(i=0;i<m;i++)
		cin>>b[i];
	vector<int> x;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
				if(b[j]%a[i]==0)
					x.push_back(b[j]/a[i]);
		}
	}
	int mx=*max_element(x.begin(),x.end());
    for(i=0;i<x.size();i++)
    {
    	if(mx==x[i])
    		cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
