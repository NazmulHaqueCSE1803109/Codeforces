#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,h,i,x,y,m,p;
	cin>>t;
	while(t--)
	{
		cin>>n>>h;
		vector<int> a(n);
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a.begin(),a.end());
        x=a[n-1];y=a[n-2];
        if(h%(x+y)==0)
        {
        	cout<<2*floor((double)h/(double)(x+y))<<endl;
        }
        else if(h%(x+y)<=x)
        {
        	cout<<(2*floor((double)h/(double)(x+y)))+1<<endl;
        }
        else
        {
        	cout<<(2*floor((double)h/(double)(x+y)))+2<<endl;
        }

	}
	return 0;
}