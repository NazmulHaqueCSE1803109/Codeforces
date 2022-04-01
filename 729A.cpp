#include<iostream>
using namespace std;

int main()
{
	int n,i,j;
	string s;
	cin>>n;
	cin>>s;

	for(i=0;i<n;i++)
	{
		if(s[i]=='o')
		{
             if(s[i+1]=='g' && s[i+2]=='o')
             {
             	j=i+3;
             	while(s[j]=='g' && s[j+1]=='o')
             	{
                       j +=2;
             	}
             	i=j-1;
             	cout<<"***";
             }
             else
             	cout<<s[i];

		}
		else
			cout<<s[i];
	}
	cout<<endl;
	return 0;
}