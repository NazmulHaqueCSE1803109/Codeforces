#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string s;
	cin>>s;
	int n0,l,f;
	n0=count(s.begin(),s.end(),'0');
	if(n0==0)
		cout<<0<<endl;
	else
	{
		f=s.find('0');
		l=s.rfind('0');
		if(l-f+1==n0)
			cout<<1<<endl;
		else
			cout<<2<<endl;
	}
}

int main()
{
	int t,i;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}