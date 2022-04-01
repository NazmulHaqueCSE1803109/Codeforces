#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t,r,b,d,x;
    cin>>t;
    while(t--)
    {
        cin>>r>>b>>d;
        if(r<=b)
        {
            x=ceil((double)b/(double)r);
            if((x-1)<=d)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
        {
            x=ceil((double)r/(double)b);
            if((x-1)<=d)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
