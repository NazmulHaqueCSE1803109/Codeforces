#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i=0,c=0;
	cin>>n;
	string s;
	cin>>s;
	while(i<n-1)
	{
		if((s[i]=='U' && s[i+1]=='R') || (s[i]=='R' && s[i+1]=='U'))
			{
				i +=2; c++;
			}
			else
				i++;
	}
	cout<<n-c<<endl;
	return 0;
}