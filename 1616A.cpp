#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,i,j,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		vector<int> v(n);
		vector<int> v1;
		for(i=0;i<n;i++)
			cin>>v[i];
		v1.push_back(v[0]);
		for(i=1;i<n;i++)
		{
			int f=1;
           for(j=0;j<v1.size();j++)
           {
           	if(v[i]==v1[j])
           		{
           			f=0;
           			break;
           		}
           }
           if(f)
           	v1.push_back(v[i]);
           else
           {
           	int f1=1;
           	int x=v[i]*(-1);
           	for(j=0;j<v1.size();j++)
           	{
                 if(x==v1[j])
                 {
                      f1=0;break;
                 }
           	}
           	if(f1)
           		v1.push_back(x);
           }
		}
       cout<<v1.size()<<endl;
	}
	return 0;
}