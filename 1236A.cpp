#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,a,b,c,ts,x;
	cin>>t;
	while(t--)
	{
		ts=0;
		cin>>a>>b>>c;
			x=c/2;
			if(x<=b)
				{
					ts +=(x+(2*x));
					c -=(2*x);
					b -=x;
				}
			else
			{
				ts +=(b+(2*b));
				c -=(2*b);
				b -=b;
			}
			x=b/2;
			if(x<=a)
				{
					ts +=(x+(2*x));
					b -=(2*x);
					a -=x;
				}
			else
			{
				ts +=(a+(2*a));
				b -=(2*a);
				a -=a;
			}

		cout<<ts<<endl;
	}
	return 0;
}