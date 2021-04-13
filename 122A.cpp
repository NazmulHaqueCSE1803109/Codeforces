#include<iostream>
using namespace std;
int main()
{
    int x,n,f=0,d;
    cin>>n;
    d=n;
    while(d>0)
    {
        x=d%10;
        d=d/10;
        if(x==4||x==7)
        {
            f=1;
        }
        else
        {
            f=0;
            break;
        }
    }
    if(f)
        {
            cout<<"YES"<<endl;
        }
    else{
        if(n%4==0||n%7==0)
            {
                cout<<"YES"<<endl;
            }
        else
            {
                cout<<"NO"<<endl;
            }
    }
    return 0;
}
