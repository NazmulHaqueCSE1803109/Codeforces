#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,v,i,l,cost,x,y;
	cin>>n>>v;
	l=n-1;
	if(v>=l)
		cout<<l<<endl;
	else
	{
		cost=v;
		x=l-v;
		y=x+2;
		for(i=2;i<y;i++)
			cost +=i;
		cout<<cost<<endl;
	}
	return 0;
}