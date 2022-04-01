#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,n;
	cin>>n;
	string s;
	cin>>s;
	i=0;
	int l=s.size();
	while(i<(l-1))
	{
		if((s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y')&&
(s[i+1]=='a'|| s[i+1]=='e'|| s[i+1]=='i'|| s[i+1]=='o' || s[i+1]=='u' || s[i+1]=='y'))
		{
			s.erase(s.begin()+(i+1));
			l--;
		}
		else
			i++;
			
	}
	cout<<s<<endl;
	return 0;
}
