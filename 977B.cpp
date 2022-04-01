#include<iostream>
using namespace std;

int main()
{
	int n,i,j,c,mx=0;
	cin>>n;
	string s,fs;
	cin>>s;
	for(i=0;i<n-1;++i)
	{
	   c=0;
	  for(j=0;j<n-1;++j)
       {
       	if(s[j]==s[i] && s[j+1]==s[i+1])
       	{
       		c++;
       	}
       }
       if(c>mx)
       	{
       		fs=string(1,s[i]) + string(1,s[i+1]);
       		mx=c;
       	}
	}
	cout<<fs<<"\n";
	return 0;
}