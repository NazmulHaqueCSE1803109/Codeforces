#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,j,n,m,sum=0;
	cin>>n>>m;
	vector<string> s(n);
	vector<int> a(m);
	for(i=0;i<n;i++)
	{
		cin>>s[i];
	}
	for(i=0;i<m;i++)
		cin>>a[i];
	for(i=0;i<m;i++)
	{
		vector<int> cnt(5,0);
		for(j=0;j<n;j++)
		{
			string x=s[j];
			if(x[i]=='A')
				cnt[0]++;
			else if(x[i]=='B')
				cnt[1]++;
			else if(x[i]=='C')
				cnt[2]++;
			else if(x[i]=='D')
				cnt[3]++;
			else
				cnt[4]++;
		}
		int mx=*max_element(cnt.begin(),cnt.end());
        sum +=(mx*a[i]);
	}
	cout<<sum<<"\n";
	return 0;
}