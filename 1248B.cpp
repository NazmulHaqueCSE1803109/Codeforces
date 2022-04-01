#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,i,s1=0,s2=0,x;
	cin>>n;
	vector<int> a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a.begin(),a.end());
	for(i=0;i<n;i++)
	{
		if(i<n/2)
			s1 +=a[i];
		else
			s2 +=a[i];
	}
	x=(s1*s1)+(s2*s2);
	cout<<x<<endl;
	return 0;
}