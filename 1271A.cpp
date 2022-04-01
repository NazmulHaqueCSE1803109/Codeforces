#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c,d,e,f,s1,cs1,s2,cs2;
	cin>>a>>b>>c>>d>>e>>f;
	if(f>=e)
	{
		vector<int> v;
		v.push_back(b);
		v.push_back(c);
		v.push_back(d);

		s2=*min_element(v.begin(),v.end());
		cs2=f*s2;
        d=d-s2;
        if(a<=d)
        {
        	s1=a;
        	cs1=e*s1;
        }
        else
        {
        	s1=d;
        	cs1=e*s1;
        }
	}
	else
	{
		if(a<=d)
        {
        	s1=a;
        	cs1=e*s1;
        }
        else
        {
        	s1=d;
        	cs1=e*s1;
        }
        d=d-s1;
		vector<int> v;
		v.push_back(b);
		v.push_back(c);
		v.push_back(d);

		s2=*min_element(v.begin(),v.end());
		cs2=f*s2;
	}
	cout<<cs1+cs2<<endl;
	return 0;
}