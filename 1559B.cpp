#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n,i,c1=0,c2=0;
	string s,s1,s2;
	cin>>n;
	cin>>s;
	s1=s;s2=s;
	if(s1[0]=='?')
		{
			s1[0]='B';
			s2[0]='R';
		}
	for(i=0;i<n;i++)
	{
		if(s1[i]=='?')
		{
			if(s1[i-1]=='R')
				s1[i]='B';
			else
				s1[i]='R';
			if(s2[i-1]=='R')
				s2[i]='B';
			else
				s2[i]='R';

		}
	}
	for(i=1;i<n;i++)
	{
		if(s1[i-1]==s1[i])
			c1++;
	}
	for(i=1;i<n;i++)
	{
		if(s2[i-1]==s2[i])
			c2++;
	}
	if(c1<=c2)
		cout<<s1<<endl;
	else
		cout<<s2<<endl;
	
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}