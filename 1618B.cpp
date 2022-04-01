#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		char x;
		vector<string> s(n-2);
		string st;
		for(i=0;i<n-2;i++)
			cin>>s[i];
		x=s[0][1];
		st +=s[0][0];
		for(i=1;i<n-2;i++)
		{
			if(x==s[i][0])
				st +=x;
			else
			{
				st +=x;
				st +=s[i][0];
			}
			x=s[i][1];
		}
		st +=s[n-3][1];
		if(st.size()<n)
			cout<<st+'a'<<endl;
		else
			cout<<st<<endl;
	}
	return 0;
}