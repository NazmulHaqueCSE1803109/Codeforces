#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n,a,b,ll,i,x,y;
	cin>>n>>a>>b;
	vector<int> l,r;
    l.push_back(a);
    ll=1;
    for(i=n;i>=1;i--)
    {
    	if((ll<(n/2)))
    		{
    			if(i==b)
    				r.push_back(i);
    			else
    				{
    					if(i!=a)
    					{
    						l.push_back(i);
    					    ll++;
    					}
    					
    				}
    		}
    	else
    		{
    			if(i!=a)
    				r.push_back(i);
    		}
    
    }
    x=*min_element(l.begin(),l.end());
    y=*max_element(r.begin(),r.end());
    if(x==a && y==b)
    {
    	for(i=0;i<l.size();i++)
    		cout<<l[i]<<" ";
    	for(i=0;i<r.size();i++)
    		cout<<r[i]<<" ";
    	cout<<endl;
    }
    else
    	cout<<-1<<endl;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}