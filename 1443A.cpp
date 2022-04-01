#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,i,j;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=1;i<=n;i++)
		{
			cout<<4*n-2*i<<" ";
		}
		cout<<endl;
	}
	return 0;
}