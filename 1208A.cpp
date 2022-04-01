#include<iostream>
using namespace std;

int t,a,b,n;
int fib(int x)
{
	if(x==0)
		return a;
	if(x==1)
		return b;
	return fib(n-1)^fib(n-2);
}

int main()
{
	
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>n;
		cout<<fib(n)<<endl;
	}
	return 0;
}