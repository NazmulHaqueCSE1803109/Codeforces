#include<bits/stdc++.h>
using namespace std;

int main()
{
	int q,n,k,i,x,y;
	cin>>q;
	while(q--)
	{
		cin>>n>>k;
        vector<int> a(n);
        for(i=0;i<n;i++)
        	cin>>a[i];
        x=*min_element(a.begin(),a.end());
        y=*max_element(a.begin(),a.end());
        if((x+k)>=(y-k))
        	cout<<x+k<<endl;
        else
        	cout<<-1<<endl;
	}
	return 0;
}