#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,x,mx;
	cin>>n;
	vector<int> b(n),a(n);
	for(i=0;i<n;i++)
		cin>>b[i];
	mx=a[0]=b[0];
	a[1]=b[0]+b[1];
	if(a[1]>mx)
		mx=a[1];
	for(i=2;i<n;i++)
	{
		a[i]=mx+b[i];
		if(a[i]>mx)
			mx=a[i];
	}
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}