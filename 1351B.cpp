#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,a1,b1,a2,b2,x,y,z,w;
	scanf("%d",&t);
	while(t--)
	{
		cin>>a1>>b1;
		cin>>a2>>b2;
		x=min(a1,b1);
		y=max(a1,b1);
		z=min(a2,b2);
		w=max(a2,b2);
		if(y!=w)
			cout<<"NO\n";
		else
		{
			if((x+z)==y)
			    cout<<"YES\n";
		    else
			    cout<<"NO\n";
		}
	}
	return 0;
}