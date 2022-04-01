#include<bits/stdc++.h>
using namespace std;

int main()
{
	string t;
	cin>>t;
	int l=t.size(),sl,i,j;
	string s;
    sl=l-1;
    if(l>1)
    {
    	for(i=0,j=l-1;i<=j;i++,j--)
	{
       s[sl]=t[j];
       sl--;
       s[sl]=t[i];
       sl--;
	}
	for(i=0;i<l;i++)
		cout<<s[i];
	cout<<endl;
    }
    else
    	cout<<t<<endl;
	
	return 0;
}