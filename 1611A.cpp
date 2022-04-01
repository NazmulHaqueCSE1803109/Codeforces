#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,d,x,m;
	cin>>t;
	while(t--)
	{
		vector<int> v;
		cin>>n;
		x=n;
		m=0;
		while(n)
		{
           d=n%10;
           n /=10;
           v.push_back(d);
           if(d%2==0)
           {
           	m=1;
           }
		}
		if(x%2==0)
			cout<<0<<endl;
		else{
			if(v[v.size()-1]%2==0)
				cout<<1<<endl;
			else if(m==0)
				cout<<-1<<endl;
			else
				cout<<2<<endl;
		}
	}
	return 0;
}