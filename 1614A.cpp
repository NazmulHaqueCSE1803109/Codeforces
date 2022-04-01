#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,l,r,k,i;
	cin>>t;
	while(t--)
	{
		cin>>n>>l>>r>>k;
		vector<int> a(n);
		for(i=0;i<n;i++)
			cin>>a[i];
		int cn=0;
		sort(a.begin(),a.end());
		i=0;
		while(k>=a[i] && i<n)
		{
			if(a[i]>=l && a[i]<=r)
			{
               cn++;
			   k -=a[i];
			}
			i++;
		}
		cout<<cn<<endl;
	}
	return 0;
}