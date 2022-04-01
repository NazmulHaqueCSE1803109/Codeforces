#include<iostream>
using namespace std;

int main()
{
	int t,n,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=1;i<=n;i++)
			cout<<i+1<<" ";
		cout<<endl;
	}
	return 0;
}