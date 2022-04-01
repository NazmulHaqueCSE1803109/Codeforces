#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n,i,j,f,f1=0;
	cin>>n;
	vector<int> a(n),b(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		cin>>b[i];
	for(i=0;i<n;i++)
	{
		f=0;
		for(j=0;j<n;j++)
		{
			if((a[i]+1)<b[j])
			{
				f=1;
				break;
			}
		}
		if(f)
			{
				cout<<"NO\n";
				return;
	}

	}
	cout<<"YES\n";
	return;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}