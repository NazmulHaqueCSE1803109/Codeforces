#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t,n,k,x,y;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		x=n-(n%k);
		y=min(k/2,n%k);
		cout<<x+y<<endl;
	}
	return 0;
}