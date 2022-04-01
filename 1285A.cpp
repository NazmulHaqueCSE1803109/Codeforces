#include<iostream>
using namespace std;

int main()
{
	int n,i,nl=0,nr=0;
	string s;
	cin>>n;
	cin>>s;
	for(i=0;i<n;i++)
	{
		if(s[i]=='L')
			nl++;
		else
			nr++;
	}
	cout<<nl+nr+1<<endl;
	return 0;
}