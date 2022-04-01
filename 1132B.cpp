#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,i,m,sum,j,x;
	cin>>n;
	vector<int> a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	cin>>m;
	vector<int> q(m);
	for(i=0;i<m;i++)
		cin>>q[i];
	sort(a.begin(),a.end(),greater<int>());
	sum=0;
		for(j=0;j<n;j++)
		{
			sum +=a[j];
		}
	for(i=0;i<m;i++)
		cout<<sum-a[q[i]-1]<<endl;
	return 0;
}