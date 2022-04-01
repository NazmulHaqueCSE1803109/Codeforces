#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,t,i,s,d=0;
	cin>>n>>t;
	vector<int> a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	i=0;s=0;
	while(s<t && i<n)
	{
		s +=(86400-a[i]);
		i++;
		d++;
	}
cout<<d<<endl;
return 0;
}