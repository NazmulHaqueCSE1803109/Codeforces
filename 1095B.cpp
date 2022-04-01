#include<bits/stdc++.h>
using namespace std;

// void int_code()
// {
// 	#ifndef ONLINE_JUDGE
// 	freopen("input.txt","r",stdin);
// 	freopen("output.txt","w",stdout);
// 	#endif
// }

int main()
{
	// int_code();
	int i,n,x,y;
	cin>>n;
	vector<int> a(n);
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	x=a[n-2]-a[0];
	y=a[n-1]-a[1];
	if(n==2)
		cout<<"0\n";
	else
	{
		cout<<min(x,y)<<endl;
	}
	return 0;
}