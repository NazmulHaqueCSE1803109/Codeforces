#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,d,i,j,c=0,f=0;
	cin>>n>>d;
	string s;
	cin>>s;
	i=0;
	while(i<n)
	{
		j=i+d;
		while((j>i && j<n) && s[j]!='1')
		{
			j--;
		}
		if(j==i)
		{
			f=1;
			break;
		}
		if(j==n-1 || j>=n)
			{
				c++;
				break;
			}
		i=j;
		c++;
	}
	if(f)
		cout<<-1<<endl;
	else
		cout<<c<<endl;
	return 0;
}