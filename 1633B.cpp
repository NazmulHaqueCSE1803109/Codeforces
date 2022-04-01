#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,i,n0,n1;
	string s;
	cin>>t;
	while(t--)
	{
		n0=0;n1=0;
		cin>>s;
		for(i=0;i<s.size();i++)
		{
			if(s[i]=='0')
				n0++;
			else
				n1++;
		}
		if(n0==n1)
		{
			if(s.size()==2)
				cout<<0<<endl;
			else
			{
				for(i=s.size()-1;i>=0;i--)
				{
					if(s[i]=='0')
						n0--;
					else
						n1--;
					if(n0<n1)
						{
							cout<<n0<<endl;
							break;
						}
					else
						{
							cout<<n1<<endl;
							break;
						}
				}
			}
		}
		else if(n0<n1)
			cout<<n0<<endl;
		else
			cout<<n1<<endl;
	}
	return 0;
}