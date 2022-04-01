#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,ns=0;
	cin>>n;
	string s;
	cin>>s;
    for(i=0;i<n;i++)
    {
    	if(s[i]==+'-')
    	{
    		if(ns>0)
    			ns--;
    	}
    	else
    		ns++;
    }
    cout<<ns<<endl;
    return 0;
}