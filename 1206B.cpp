#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,i,ne=0,c=0,n0=0;
	cin>>n;
	vector<int> a(n),v;
	for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]<0)
				ne++;
			if(a[i]==0)
				n0++;
			if(a[i]!=0)
				v.push_back(a[i]);
		}
		for(i=0;i<v.size();i++)
		{
			if(v[i]>0)
				c +=abs(1-v[i]);
			else
				c +=abs(v[i]+1);
		}
		if(ne%2==0)
			cout<<c+n0<<endl;
		else
		{
			if(n0)
				cout<<c+n0<<endl;
			else
				cout<<c+2<<endl;
		}
		return 0;
}