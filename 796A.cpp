#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,k,i,c1=0,c2=0,f1=0,f2=0;
	cin>>n>>m>>k;
	vector<int> a(n);
	for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=m+1;i<=n;i++)
	{
		if(k>=a[i] && a[i]>0)
			{
				f1=1;
				c1++;
				break;
			}
		else
			c1++;
	}
	for(i=m-1;i>0;i--)
	{
		if(k>=a[i] && a[i]>0)
			{
				c2++;
				f2=1;
				break;
			}
		else
			c2++;
	}
	if(f1&&f2)
		cout<<min(c1,c2)*10<<endl;
	else
	{
		if(f1)
			cout<<c1*10<<endl;
		else
			cout<<c2*10<<endl;
	}
	return 0;
}