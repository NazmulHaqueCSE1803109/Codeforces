#include<iostream>
#include <math.h>
using namespace std;

int main()
{
	int i,t;
    int p1,p2;
    long long int x1,x2;
	cin>>t;
	while(t--)
	{
		cin>>x1>>p1;
		cin>>x2>>p2;
		int p=min(p1,p2);
		p1 -=p;
		p2 -=p;
		if(p1>=7)
			cout<<">"<<endl;
		else if(p2>=7)
			cout<<"<"<<endl;
		else
		{
			for(i=0;i<p1;i++)
				x1 *=10;
			for(i=0;i<p2;i++)
				x2 *=10;
			if(x1<x2)
			   cout<<"<"<<endl;
		    else if(x1>x2)
			   cout<<">"<<endl;
		    else
			   cout<<"="<<endl;
		}
		
		
	}
	return 0;
}