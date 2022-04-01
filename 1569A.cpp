#include<iostream>
using namespace std;

int main()
{
	int t,n,i,j,ac,bc;
	cin>>t;
	while(t--)
	{
		cin>>n;
		string s;
		cin>>s;
		int fl=1;
		for(i=0;i<s.size();i++)
		{
			int f=1,ac=0,bc=0;
			for(j=i;j<s.size();j++)
			{
				if(s[j]=='a')
					ac++;
				if(s[j]=='b')
					bc++;
				if(ac==bc)
				{
					cout<<i+1<<" "<<j+1<<endl;
					f=0;fl=0;
					break;
				}
			}
			if(f==0)
				{
					fl=0;
					break;
				}
		}
		if(fl)
			cout<<-1<<" "<<-1<<endl;
	}
	return 0;
}