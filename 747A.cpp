#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,x;
	cin>>n;
	for(i=1;i<=sqrt(n+1);i++)
		if(n%i==0)
			x=i;
	cout<<x<<" "<<n/x<<endl;
	return 0;
}