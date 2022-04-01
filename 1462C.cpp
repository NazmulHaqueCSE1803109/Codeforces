#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int x,d,f,num=0,i;
	vector<int> v;
	cin>>x;
	if(x<10)
		cout<<x<<endl;
	else if(x>45)
		cout<<-1<<endl;
	else
	{
		d=9;
		while(x>d)
		{
			x -=d;
			v.push_back(d);
			d--;
			
		}
		v.push_back(x);
		f=1;
		for(i=0;i<v.size();i++)
		{
			num +=(v[i]*f);
			f *=10;
		}
		cout<<num<<endl;
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}