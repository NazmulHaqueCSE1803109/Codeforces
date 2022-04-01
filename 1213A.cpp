#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,od=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		int x;
		cin>>x;
		od +=x & 1;
	}
	cout<<min(od,n-od);
	return 0;
}