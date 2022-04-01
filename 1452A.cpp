#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,x,y;
	cin>>t;
	while(t--)
	{
		cin>>x>>y;
		if(x==y)
			cout<<2*x<<endl;
		else
			cout<<2*max(x,y)-1<<endl;
	}
	return 0;
}