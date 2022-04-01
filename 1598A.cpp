#include <iostream>
using namespace std;

int main()
{
	int t,n,i,j,f;
	cin>>t;
	while(t--)
	{
		f=1;
		cin>>n;
		char a[n],b[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		for(j=0;j<n;j++)
			cin>>b[j];
		for(i=0;i<n;i++)
		{
			if(a[i]=='0' || b[i]=='0')
				{
					f=1;
				}
				else
				{
					cout<<"NO"<<endl;
					f=0;
					break;
				}

		}
		if(f==1)
			cout<<"YES"<<endl;
	}
	return 0;
}