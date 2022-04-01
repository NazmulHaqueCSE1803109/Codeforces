#include<bits/stdc++.h>
using namespace std;

int main()
{
	int l,r,a,t,d;
	cin>>l>>r>>a;
    t=min(l,r);
    d=abs(l-r);
    if(d!=0)
    	{
    		t +=min(d,a);
    		if(a>d)
    			{
    				t +=((a-d)/2);
    			}
    	}
    else
    {
    	t +=(a/2);
    }
    cout<<t*2<<endl;
    return 0;
}