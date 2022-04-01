#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,a,b,p,x;
	cin>>t;
	while(t--)
	{
		p=0;
		cin>>a>>b;
		x=abs(a-b);
		while(x)
		{
			if(x/5)
			{
				p +=(x/5);
				x -=(5*(x/5));
			}
			else if(x/2)
			{
				p +=(x/2);
				x -=(2*(x/2));
			}
			else
			{
				p +=x;
				x -=1;
			}
		}
		cout<<p<<endl;
	}
	return 0;
}