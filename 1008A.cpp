// 1008A
#include<iostream>
using namespace std;

int main()
{
	int f=1,i;                   
	string s;
	cin>>s;
	int l=s.size()-1;
	if(s[l]!='a'&& s[l]!='e' && s[l]!='i' && s[l]!='o' && s[l]!='u' && s[l]!='n')
	{
			cout<<"NO\n";
	}
	else
	{

		for(i=0;i<s.size()-1;i++)
	{
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='n')
			continue;
		else
		{
			if(s[i+1]=='a' || s[i+1]=='e' || s[i+1]=='i' || s[i+1]=='o' || s[i+1]=='u')
			{
				f=1;
			}
			else
			{
				f=0;
				break;
			}
		}
	}
	if(f)
		cout<<"YES\n";
	else
		cout<<"NO\n";

	}
	
	return 0;
}