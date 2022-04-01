#include<iostream>
#include<set>
using namespace std;

int main()
{
	int t,i,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		set<int> a;
		for(i=1;i*i<=n;i++)
			a.insert(i*i);
		for(i=1;i*i*i<=n;i++)
			a.insert(i*i*i);
		cout<<a.size()<<"\n";
	}

	return 0;
}