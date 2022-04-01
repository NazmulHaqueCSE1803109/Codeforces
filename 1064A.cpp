#include<iostream>
using namespace std;

int main()
{
	int a,b,c,x,y;
	cin>>a>>b>>c;
	x=0;
	if((a+b)<=c)
	{
		y=c-(a+b);
		x +=(y+1);
	}
	
	if((a+c)<=b)
	{
		y=b-(a+c);
		x +=(y+1);
	}

	if((b+c)<=a)
	{
		y=a-(b+c);
		x +=(y+1);
	}

	cout<<x<<endl;
	return 0;
	
}