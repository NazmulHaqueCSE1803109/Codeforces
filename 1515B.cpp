#include<iostream>
#include<math.h>
using namespace std;

bool issquare(int x)
{
    int y=sqrt(x);
    if((y*y)==x)
        return true;
    else
        return false;
}

int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if((n%2==0)&&issquare(n/2))
            cout<<"YES"<<endl;
        else if((n%4==0)&&issquare(n/4))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
