#include<bits/stdc++.h>
using namespace std;


long long int fr(long long int n)
{
	return n*(n-1)/2;
}

int main()
{
	long long int n,m,min,mx,a,b;
	cin>>n>>m;
	a=n/m;b=n%m;
	min=fr(a)*(m-b)+fr(a+1)*b;
	mx=fr(n-m+1);
	cout<<min<<" "<<mx<<endl;
	return 0;
}