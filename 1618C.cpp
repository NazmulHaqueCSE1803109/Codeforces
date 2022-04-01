#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	if(a==0)
		return b;
	return gcd(b%a,a);
}

int main()
{
	int t,i,n,r1,r2;
	cin>>t;
	while(t--)
	{
		cin>>n;
		vector<int> a(n),ev,od;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(i%2==0)
				ev.push_back(a[i]);
			else
				od.push_back(a[i]);
		}
		r1=ev[0];
		for(i=1;i<ev.size();i++)
		{
			r1=gcd(ev[i],r1);
			if(r1==1)
				break;
		}
		r2=od[0];
		for(i=1;i<od.size();i++)
		{
			r2=gcd(od[i],r2);
			if(r2==1)
				break;
		}
		if(r1==r2)
			cout<<0<<endl;
		else
			cout<<r1<<endl;
	}
	return 0;
}