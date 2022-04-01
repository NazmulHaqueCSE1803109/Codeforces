#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,i,n,s;
	cin>>t;
	while(t--)
	{
		s=0;
		cin>>n;
		vector<int> a(n);
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n;i++)
			s +=a[i];
		if(s%n==0)
			cout<<0<<endl;
		else
			cout<<1<<endl;
	}
	return 0;
}