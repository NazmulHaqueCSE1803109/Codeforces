#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,l,r,i,j;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        if(l==r)
            cout<<0<<endl;
        else
        {
            x=ceil((double)r/(double)2)-1;
            if(x>l)
                cout<<x<<endl;
            else
                cout<<r%l<<endl;
        }
    }
    return 0;
}
