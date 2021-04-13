#include<iostream>
using namespace std;
int main()
{
    int t,a,b,x,tmp;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a<b)
        {
            tmp=a;
            a=b;
            b=tmp;
        }
        x=2*b;
        if(x>=a)
            cout<<x*x<<endl;
        else
            cout<<a*a<<endl;
    }
    return 0;
}
