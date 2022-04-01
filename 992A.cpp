#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,n,x;
	cin>>n;
	vector<int> a;
	for(i=0;i<n;i++)
		{
			cin>>x;
			if(x!=0)
				a.push_back(x);
		}
		sort(a.begin(),a.end());
		a.erase(unique(a.begin(),a.end()),a.end());
		cout<<a.size()<<endl;
		return 0;
}