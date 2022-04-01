#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t,n,x,i,s1,s2;
	cin>>t;
	while(t--)
	{
		s1=0;s2=0;
		cin>>n>>x;
		vector<int> a(n);
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n;i++)
			{
				if(a[i]%x==0)
					s1 +=(a[i]/x);
				else
					s1 +=(a[i]/x+1);
				s2 +=a[i];
			}
			if(s2%x==0)
				cout<<s2/x<<" "<<s1<<endl;
			else
				cout<<s2/x+1<<" "<<s1<<endl;
	}
	return 0;
}