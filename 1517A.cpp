#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c,d;
    long long int n,x;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>n;
        if(n%2050==0)
        {
            x=n/2050;
            while(x)
            {
                d=x%10;
                x=x/10;
                c +=d;
            }
            cout<<c<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}
