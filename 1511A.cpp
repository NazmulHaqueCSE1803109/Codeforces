#include<iostream>
using namespace std;
int main()
{
    int t,i,n,up,dv1,dv2;
    cin>>t;
    while(t--)
    {
        up=0;dv1=0,dv2=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            if(a[i]==1)
                up++;
            else if(a[i]==2)
                dv2++;
            else
            {
                if(dv1>up)
                    dv2++;
                else
                    up++;
            }
        }
        cout<<up<<endl;
    }
    return 0;
}
