#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,i,k;
	cin>>t;
	while(t--)
	{
		k=1;
		cin>>n;
		vector<int> a(n);
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n;i++)
		{
			if(a[i]==1)
			{
				if(i>0 && a[i-1]==1)
					k +=5;
				else
					k++;
			}
			else
			{
				if(i>0 && a[i-1]==0)
				{
					k=-1;
					break;
				}
			}
		}
		cout<<k<<endl;
	}
}