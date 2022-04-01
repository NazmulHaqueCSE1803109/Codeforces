#include<iostream>
using namespace std;
int main()
{
    int t,i,j,n,k;
    int a[105];
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n-1;i++)
        {
            if(a[i]<k)
            {
                k -=a[i];
                a[n-1] +=a[i];
                a[i]=0;
            }
            else
            {
                a[i] -=k;
                a[n-1] +=k;
                k=0;
            }
        }
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}
