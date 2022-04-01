#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t,n,i,s,k,x;
	cin>>t;
	while(t--)
	{
		s=0;
		cin>>n;
		vector<int> a(n);
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			s +=a[i];
		}
     k=s%n;
     x=k*(n-k);
     cout<<x<<endl;
	}
	return 0;
}