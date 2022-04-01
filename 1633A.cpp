#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,i,n,x,f,xi,xd;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n%7==0)
			cout<<n<<endl;
		else
		{
			f=1;
			x=n%10;
			xi=n,xd=n;
			for(i=1;i<=(9-x);i++)
			{
				xi++;
				if(xi%7==0)
				{
					cout<<xi<<endl;
					f=0;
					break;
				}
			}
			if(f)
			{
				for(i=x;i>=1;i--)
				{
					xd--;
					if(xd%7==0)
					{
						cout<<xd<<endl;
						break;
					}
				}
			}
		}
	}
	return 0;
}