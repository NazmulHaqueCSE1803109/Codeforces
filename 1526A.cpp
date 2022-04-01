#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[2*n];
        for(i=0;i<2*n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" "<<a[i+n]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
