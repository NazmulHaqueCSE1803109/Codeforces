#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int n,t,num=0,i;
    cin>>n>>t;
    if(t==10)
    {
        if(n==1)
            cout<<-1<<endl;
        else
        {
            for(i=1;i<n;i++)
                cout<<1;
            cout<<0<<endl;
        }
    }
    else
    {
        for(i=1;i<=n;i++)
            cout<<t;
        cout<<endl;
    }

    return 0;
}
