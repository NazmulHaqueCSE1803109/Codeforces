#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,r,i;
	cin>>n>>m>>r;
	vector<int> s(n);
	vector<int> b(m);
	for(i=0;i<n;i++)
		cin>>s[i];
	for(i=0;i<m;i++)
		cin>>b[i];
	int x=*min_element(s.begin(),s.end());
	int y=*max_element(b.begin(),b.end());
	if(x<y)
		cout<<r+((y-x)*(r/x))<<endl;
	else
		cout<<r<<endl;
	return 0;
}