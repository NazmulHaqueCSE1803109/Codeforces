#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,k,i,j;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>n>>k>>s;
		if(2*k==n)
		{
			cout<<"NO\n";
		}
		else
		{
			if(k==0)
				cout<<"YES\n";
			else
			{
				int f=1;
				for(i=k-1,j=n-k;i>=0,j<n;i--,j++)
				{
                     if(s[i]!=s[j])
                     	{
                          f=0;
                          break;
                     	}
				}
				if(f)
					cout<<"YES\n";
				else
					cout<<"NO\n";
			}
		}
	}
	return 0;
}