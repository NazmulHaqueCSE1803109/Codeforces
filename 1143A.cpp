#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,m0=0,m1=0,c0=0,c1=0,ind;
	cin>>n;
	vector<int> a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
	{
		if(a[i]==0)
			m0++;
		else
			m1++;
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==0)
			c0++;
		else
			c1++;
		if(c0==m0 || c1==m1)
		{
			ind=i+1;
			break;
		}
	}
	cout<<ind<<endl;
	return 0;
}