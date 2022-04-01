#include<bits/stdc++.h>
using namespace std;
const int mod=998244353;

int factorial(int n)
{
	return (n==1 || n==0)? 1:n*factorial(n-1);
}

void solve()
{
	long long int n,x=1,y,i;
	cin>>n;
	if(n%2!=0)
		cout<<0<<endl;
	else
	{
		for(i=1;i<=n/2;i++)
			{
              x *=i*i%mod;
              x %=mod;
			}
			cout<<x<<endl;
	}
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