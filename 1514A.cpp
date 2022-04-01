#include<iostream>
#include<math.h>

using namespace std;


int main()
{
    int t,n,i,f;
    cin>>t;
    while(t--)
    {
        f=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            if(((int)sqrt(a[i])*(int)sqrt(a[i]))!=a[i])
               {
                   f=1;break;
               }
               else
               {
                   f=0;
               }
        }
        if(f)
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
