#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,i,ne=0,no=0,d,sum=0;
	cin>>n;
	vector<int> a(n),ev,od;
	for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]%2==0)
				{
					ne++;
					ev.push_back(a[i]);
				}
			else
				{
					no++;
					od.push_back(a[i]);
				}
		}
	d=abs(ne-no);
	if(d==0 || d==1)
		cout<<0<<endl;
	else
	{
		if(ne>no)
		{
			sort(ev.begin(),ev.end());
			for(i=0;i<d-1;i++)
				sum +=ev[i];
			cout<<sum<<endl;
		}
		else
		{
			sort(od.begin(),od.end());
			for(i=0;i<d-1;i++)
				sum +=od[i];
			cout<<sum<<endl;
		}
	}
   return 0;
}