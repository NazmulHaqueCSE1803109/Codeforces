#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		vector<int> v(n);
		for(i=0;i<n;i++)
			cin>>v[i];
		long long int temp=1,sum=0;
		for(i=0;i<n;i++)
			{
				while(v[i]%2==0)
				{
					temp *=2;
					v[i] /=2;
				}
			}
        sort(v.begin(),v.end());
        sum=temp*v[v.size()-1];
        for(i=0;i<v.size()-1;i++)
        	sum +=v[i];
        cout<<sum<<endl;
	}
	return 0;
}