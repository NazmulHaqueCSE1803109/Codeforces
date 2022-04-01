#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,i,x;
	cin>>n>>k;
	vector<int> v(k,0);
	string s;
	cin>>s;
	for(i=0;i<s.size();i++)
		v[(int)s[i]-65]++;
	x=*min_element(v.begin(),v.end());
    cout<<k*x<<endl;
	return 0;

}