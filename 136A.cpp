#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int f[n],g[n];
    for(i=0;i<n;i++)
    {
        cin>>f[i];
    }
    for(i=0;i<n;i++)
    {
        g[f[i]]=i+1;
    }
    for(i=1;i<=n;i++)
        cout<<g[i]<<" ";
    return 0;
}
