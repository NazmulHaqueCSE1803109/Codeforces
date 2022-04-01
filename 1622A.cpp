#include<iostream>
using namespace std;

int main()
{
	int t,l1,l2,l3;
	cin>>t;
	while(t--)
	{
		cin>>l1>>l2>>l3;
		if(l1==l2)
		{
			if(l3%2==0)
				{
					cout<<"YES\n";
					
				}
				else
					cout<<"NO\n";

		}
		else if(l1==l3)
		{
			if(l2%2==0)
				{
					cout<<"YES\n";
					
				}
				else
					cout<<"NO\n";

		}
		else if(l2==l3)
		{
			if(l1%2==0)
				{
					cout<<"YES\n";
				}
				else
					cout<<"NO\n";

		}
		else
		{
			if(l1+l2==l3)
				cout<<"YES\n";
			else if(l1+l3==l2)
				cout<<"YES\n";
			else if(l2+l3==l1)
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}

	}
	return 0;
}