#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,x,y,d;
	cin>>a>>b;
    d=abs(a-b);
    x=d/2;
    y=d-x;
    cout<<(x*(x+1))/2+(y*(y+1))/2<<endl;
    return 0;
}