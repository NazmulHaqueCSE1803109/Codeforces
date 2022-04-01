#include<bits/stdc++.h>
using namespace std;

void solve()
{
	long long int l,r,i,s,es,os,tr,en,on,xl,xr,yl,yr;
	cin>>l>>r;
	tr=(r-l)+1;
	if(tr%2==0)
	{
		en=tr/2;
		on=tr/2;
	}
	else
	{
		if(l%2==0)
			{
				en=tr/2+1;
				on=tr-en;
			}
		else
			{
				on=tr/2+1;
				en=tr-on;
			}
	}
	if(tr>1)
	{
		if(l%2==0)
		{
			xl=l;
			yl=l+1;
		}
		else
		{
			xl=l+1;
			yl=l;
		}
		if(r%2==0)
		{
			xr=r;
			yr=r-1;
		}
		else
		{
			xr=r-1;
			yr=r;
		}
		es=((double)en/(double)2)*(xl+xr);
		os=((double)on/(double)2)*(yl+yr);
		s=es-os;
		cout<<s<<endl;
	}
	else
	{
		if(l%2==0)
			cout<<l<<endl;
		else
			cout<<l*(-1)<<endl;
	}
	
}

int main()
{
	int q;
	cin>>q;
	while(q--)
	{
		solve();
	}
	return 0;
}