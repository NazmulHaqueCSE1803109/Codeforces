#include<iostream>
using namespace std;

int main()
{
	string s;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>s;
	int ln=s.size(),i,hf,f=1;
	hf=ln/2;
	if(ln%2!=0)
		cout<<"NO\n";
    else
	{
		for(i=0;i<hf;i++)
		{
			if(s[i]!=s[hf+i])
			{
                 f=0;break;
			}
		}
		if(f)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	}
	return 0;
}