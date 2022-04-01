
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,l,r,x;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        x=(r/2)+1;
        if(l<=x)
            cout<<r%x<<endl;
        else
            cout<<r%l<<endl;
    }
    return 0;
}
