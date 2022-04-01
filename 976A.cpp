#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,c0=0;
	cin>>n;
	string s;
	cin>>s;
	
	if(n==1)
		cout<<s<<endl;
	else
	{
		for(i=0;i<n;i++)
	   {
		  if(s[i]=='0')
			  c0++;
	   }
	   cout<<1;
	   for(i=0;i<c0;i++)
	   	  cout<<0;
	   cout<<endl;
	}
	return 0;
}