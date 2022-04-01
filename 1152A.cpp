#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,i,ce=0,c0=0,me=0,m0=0;
	cin>>n>>m;
	vector<int> a(n);
	vector<int> b(m);
	for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]%2==0)
				ce++;
			else
				c0++;
		}
	for(i=0;i<m;i++)
		{
           cin>>b[i];
           if(b[i]%2==0)
				me++;
			else
				m0++;
		}
		cout<<min(ce,m0)+min(c0,me)<<endl;
		return 0;
}