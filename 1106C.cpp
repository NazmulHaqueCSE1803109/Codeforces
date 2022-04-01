#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,i,j,x,s=0;
	cin>>n;
	vector<int> a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a.begin(),a.end());
    i=0;j=n-1;
    while(i<j)
    {
    	x=a[i]+a[j];
    	s +=(x*x);
    	i++;j--;
    }
    cout<<s<<endl;
    return 0;
}