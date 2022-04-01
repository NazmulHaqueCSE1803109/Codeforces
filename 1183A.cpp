#include<bits/stdc++.h>
using namespace std;

int digit(int a)
{
	int s=0;
	while(a)
	{
		s +=(a%10);
		a /=10;
	}
	return s;
}

int main()
{
	int a;
	cin>>a;
	while(digit(a)%4!=0)
	{
		a++;
	}
	cout<<a<<endl;
	return 0;
}