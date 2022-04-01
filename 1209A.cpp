#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j,x,mn=0;
	cin>>n;
	vector<int> a(n);
	vector<bool> b(n);
	for(i=0;i<n;i++)
		{
			cin>>a[i];
			b[i]=1;
		}
		sort(a.begin(),a.end());
		for(i=0;i<n;i++)
		{
			if(b[i]==1)
				{
					x=a[i];
					mn++;
				}
			for(j=0;j<n;j++)
			{
				if(a[j]%x==0 && b[j]==1)
				{
					b[j]=0;
				}
			}
		}
		cout<<mn<<endl;
		return 0;
}