#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,s=1;
	cin>>a>>b;
    while(1)
    {
    	if(s%2==0)
    {
    	b -=s;
    	if(b<0)
    		{
    			cout<<"Valera\n";
    			break;
    		}
    	s++;
    }
    else
    {
    	a -=s;
    	if(a<0)
    		{
    			cout<<"Vladik\n";
    			break;
    		}
    	s++;
    }
    }
    return 0;
}