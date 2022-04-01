#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,fl,i,j;
	cin>>n;
	vector<string> s(n);
	for(i=0;i<n;i++)
		cin>>s[i];
	cout<<"NO\n";
	for(i=1;i<n;i++)
	{
		fl=0;
		for(j=0;j<i;j++)
		{
			if(s[j]==s[i])
				fl=1;
		}
		if(fl)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}