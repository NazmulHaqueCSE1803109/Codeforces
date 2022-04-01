#include<iostream>
using namespace std;

int main()
{
	int i,t,a[7];
	cin>>t;
	while(t--)
	{
		for(i=0;i<7;i++)
			cin>>a[i];
		int x=a[0]+a[1];
		cout<<a[0]<<" "<<a[1]<<" "<<a[6]-x<<endl;
	}
	return 0;
}