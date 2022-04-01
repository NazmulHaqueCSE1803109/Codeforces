#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,k,f,i,j;
	string s;
	cin>>t;
	while(t--)
	{
		f=1;
		cin>>n>>k>>s;
		for(i=0,j=s.size()-1;i<=j;i++,j--)
		{
			if(s[i]!=s[j])
				f=0;
		}
		if(f)
			cout<<1<<endl;
		else
		{
			if(k>0)
				cout<<2<<endl;
			else
				cout<<1<<endl;
		}
	}
	return 0;
}