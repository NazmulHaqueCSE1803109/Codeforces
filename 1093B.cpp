#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,i,j,l,f,f2;
	string s;
	char tp;
	cin>>t;
	while(t--)
	{
		cin>>s;
		l=s.size();
		i=0;j=l-1;
		f=0;
		while(i<j)
		{
			if(s[i]!=s[j])
				{
					f=1;
					break;
				}
				i++;j--;
		}
		if(f)
			cout<<s<<endl;
		else
		{
			f2=0;
			for(i=0;i<l-1;i++)
			{
				if(s[i]!=s[l-1])
				{
					tp=s[l-1];
					s[l-1]=s[i];
					s[i]=tp;
					f2=1;
					break;
				}
			}
			if(f2)
				cout<<s<<endl;
			else
				cout<<-1<<endl;
		}
	}
	return 0;
}