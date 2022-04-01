#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,i,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		vector<int> a(n);
		for(i=0;i<n;i++)
			cin>>a[i];
		int mx=*max_element(a.begin(),a.end());
		int mn=*min_element(a.begin(),a.end());
		cout<<mx-mn<<endl;
	}
	return 0;
}