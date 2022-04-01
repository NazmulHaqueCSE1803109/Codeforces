#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,l,r,a,x,y;
	cin>>t;
	while(t--)
	{
		cin>>l>>r>>a;
		x=r/a+r%a;
		y=r/a*a-1;
		if(y>=l)
		{
			x=max(x,y/a+y%a);
		}
		cout<<x<<endl;
	}
	return 0;
}