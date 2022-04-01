#include<bits/stdc++.h>
using namespace std;

int main()
{
	int k,n,s,p,x,y,z;
	cin>>k>>n>>s>>p;
	if(n%s==0)
		x=n/s;
	else
		x=n/s+1;
	y=k*x;
	if(y%p==0)
		z=y/p;
	else
		z=y/p+1;
	cout<<z<<endl;
	return 0;
}