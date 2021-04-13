#include<iostream>
using namespace std;
int main()
{
    int t,n,i,j,x,c;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        x=a[0];
        for(i=0;i<n;i++)
        {
            if(x==a[i])
                c++;
        }
        if(c==1)
        {
            for(i=0;i<n;i++)
            {
                if(x==a[i])
                {
                    cout<<i+1<<endl;break;
                }
            }
        }
        else
        {
            for(i=0;i<n;i++)
            {
                if(x!=a[i])
                {
                    cout<<i+1<<endl; break;
                }
            }
        }
    }
    return 0;
}
