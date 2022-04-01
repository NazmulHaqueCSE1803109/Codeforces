#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,a,b,x,y;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		x=(a+b)/4;
		y=min(a,b);
		cout<<min(y,x)<<endl;
	}
	return 0;
}