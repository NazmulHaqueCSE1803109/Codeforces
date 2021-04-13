#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a,b,x,y;
    while(t--)
    {
        cin>>a>>b;
        x=abs(a-b);
        y=ceil((double)x/(double)10);
        cout<<y<<endl;
    }
    return 0;
}
