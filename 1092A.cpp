#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,k,i,j,x,y;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		x=n/k;
		for(i=0;i<x;i++)
		{
			for(j=0;j<k;j++)
			{
				cout<<char(97+j);
			}
		}
		y=n%k;
		for(i=0;i<y;i++)
			cout<<char(97+i);
		cout<<endl;
	}
	
	return 0;
}