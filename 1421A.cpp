#include<bits/stdc++.h>
using namespace std;

void solve()
{
	long long int a,b,x;
	cin>>a>>b;
	x=a&b;
	cout<<(a^x)+(b^x)<<endl;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}