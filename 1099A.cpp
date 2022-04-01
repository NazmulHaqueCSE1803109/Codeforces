#include<bits/stdc++.h>
using namespace std;

int main()
{
	int w,h,u1,d1,u2,d2,x,y;
	cin>>w>>h>>u1>>d1>>u2>>d2;
    while(h!=0)
	{
		if(h==d2 || h==d1)
		{
			if(w<0)
				w=0;
			w +=h;
			if(h==d2)
				w -=u2;
			else
				w -=u1;
			h--;
		}
		else
		{
			if(w<0)
				w=0;
			w +=h;
			h--;
		}
	}
    if(w<0)
    	cout<<0<<endl;
    else
    	cout<<w<<endl;
	return 0;
}