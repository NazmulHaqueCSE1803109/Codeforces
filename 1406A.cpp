#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,i,j,sum;
	cin>>t;
	while(t--)
	{
		sum=0;j=0;
		cin>>n;
		vector<int> a(n),c(101,0);
		for(i=0;i<n;i++)
			{
				cin>>a[i];
				c[a[i]]++;
			}
		for(i=0;i<101;i++)
		{
			if(j<1)
				{
					if(c[i]==0)
					{
						sum +=i;
					    j++;
					}
				}
				else
					break;

		}
		j=0;
		for(i=0;i<101;i++)
		{
			if(j<1)
				{
					if(c[i]==0||c[i]==1)
					{
						sum +=i;
				        j++;
					}
				}
				else
					break;
		}
		cout<<sum<<endl;
	}
	return 0;
}