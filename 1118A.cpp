#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,a,b,q;
	cin>>q;
	while(q--)
	{
		cin>>n>>a>>b;
		if(n==1)
			cout<<a<<endl;
		else
		{
			if((2*a)<=b)
			{
                cout<<n*a<<endl;
			}
			else
			{
				cout<<((n/2)*b)+((n%2)*a)<<endl;
			}
		}
	}
	return 0;
	
}