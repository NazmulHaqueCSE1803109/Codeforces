#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int a,b,c;
	cin>>a>>b>>c;
	int new_a=b-(c-b);
	if(new_a>=a && new_a%a==0 && new_a!=0)
	{
		cout<<"YES\n";
		return;
	}

	int new_b=a+(c-a)/2;
	if(new_b>=b && new_b%b==0 && (c-a)%2==0 && new_b!=0)
	{
		cout<<"YES\n";
		return;
	}

	int new_c=a+2*(b-a);
	if(new_c>=c && new_c%c==0 && new_c!=0)
	{
		cout<<"YES\n";
		return;
	}

	cout<<"NO\n";
	return;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}