#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,w,h,k,i,j,mx1,mx2,mn1,mn2,d1,d2,area1,area2;
	cin>>t;
	while(t--)
	{
		cin>>w>>h;
		cin>>k;
		vector<int> v1(k);
		for(i=0;i<k;i++)
			cin>>v1[i];
		mx1=*max_element(v1.begin(),v1.end());
		mn1=*min_element(v1.begin(),v1.end());
	    cin>>k;
	    vector<int> v2(k);
	    for(i=0;i<k;i++)
	    	cin>>v2[i];
	    cin>>k;
		vector<int> v3(k);
		for(i=0;i<k;i++)
			cin>>v3[i];
		mx2=*max_element(v3.begin(),v3.end());
		mn2=*min_element(v3.begin(),v3.end());
	    cin>>k;
	    vector<int> v4(k);
	    for(i=0;i<k;i++)
	    	cin>>v4[i];
	    d1=mx1-mn1;
	    d2=mx2-mn2;
	    area1=d1*h;
	    area2=d2*w;
	    if(area1>=area2)
	    	cout<<area1<<"\n";
	    else
	    	cout<<area2<<"\n";

	}
	return 0;
}