#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t,s,i,x,sum,a;
	cin>>t;
	while(t--)
	{
		cin>>s;
		x=s;
		sum=0;
		while(x>=10)
		{
			a=x/10;
			x=(x-10*a)+a;
			sum +=(10*a);
		}
		cout<<sum+x<<endl;
	}
	return 0;
}