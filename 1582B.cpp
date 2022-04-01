#include<bits/stdc++.h>
using namespace std;

void solve()
{
	    int n,i,c0=0,c1=0;
	    cin>>n;
		vector<int> a(n);
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n;i++)
		{
			if(a[i]==0)
				c0++;
			if(a[i]==1)
				c1++;
		}
		long long int x=pow(2,c0),y=c1;
		cout<<x*y<<endl;
}

int main()
{
	int t,n,i;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}