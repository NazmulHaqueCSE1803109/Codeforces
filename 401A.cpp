#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,x,i,s=0;
	cin>>n>>x;
	vector<int> a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		s +=a[i];
	s=abs(s);
	if(s==0)
		cout<<0<<endl;
	else if(s<=x)
		cout<<1<<endl;
	else
		{
			if(s%x!=0)
				cout<<s/x+1<<endl;
			else
				cout<<s/x<<endl;
		}
	return 0;
}