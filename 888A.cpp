#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,ex=0;
	cin>>n;
	vector<int> a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=1;i<n-1;i++)
		if((a[i]<a[i-1] && a[i]<a[i+1]) || (a[i]>a[i-1] && a[i]>a[i+1]))
			ex++;
	cout<<ex<<endl;
	return 0;
}