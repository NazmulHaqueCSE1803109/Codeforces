#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int s,a,b,c,t;
	cin>>t;
	while(t--)
	{
		cin>>s>>a>>b>>c;
		cout<<s/c+((s/(a*c))*b)<<endl;
	}
	return 0;
}