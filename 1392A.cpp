#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		vector<int> a(n);
		for(i=0;i<n;i++)
			cin>>a[i];
		sort(a.begin(),a.end());
		a.erase(unique(a.begin(),a.end()),a.end());
		if(a.size()==1)
			cout<<n<<endl;
		else
			cout<<1<<endl;
	}
	return 0;
}