#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int a,b,x,y,z,ny,nb,c=0;
	cin>>a>>b>>x>>y>>z;
    ny=x*2+y;
    nb=z*3+y;
    if(a<ny)
    	c +=(ny-a);
    if(b<nb)
    	c +=(nb-b);
    cout<<c<<endl;
    return 0;
}