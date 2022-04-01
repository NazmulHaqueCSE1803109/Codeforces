#include<iostream>
using namespace std;

int main()
{
	int t,n,i,j;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n%2==0)
			cout<<2<<" "<<n-3<<" "<<1<<endl;
		else
		{
			int num=(n-1)/2;
			if(num%2==0)
				cout<<num-1<<" "<<num+1<<" "<<1<<endl;
			else
				cout<<num-2<<" "<<num+2<<" "<<1<<endl;
		}
	}
	return 0;
}