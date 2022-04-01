#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,c1=0,c2=0;
	cin>>n;
	vector<int> a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
	{
		if(a[i]==1)
			c1++;
		else
			c2++;
	}
	if(c2<=c1)
		cout<<c2+(c1-c2)/3<<endl;
	else
		cout<<c1<<endl;
	return 0;
}