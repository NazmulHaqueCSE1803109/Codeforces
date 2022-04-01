#include<bits/stdc++.h>
using namespace std;

int main()
{
	int b,k,i,ev=0,od=0;
	cin>>b>>k;
	vector<int> a(k);
	for(i=0;i<k;i++)
	{
		cin>>a[i];
		if(a[i]%2==0)
			ev++;
		else
			od++;
	}
	if(b%2==0)
	{
		if(a[k-1]%2==0)
			cout<<"even\n";
		else
			cout<<"odd\n";
	}
	else
	{
		if(od%2==0)
			cout<<"even\n";
		else
			cout<<"odd\n";
	}
	return 0;
}