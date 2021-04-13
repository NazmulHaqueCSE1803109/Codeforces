#include<iostream>
using namespace std;
int main()
{
    int n,i,S=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int mx=a[0];
    for(i=0;i<n;i++)
    {
        if(mx<a[i])
            mx=a[i];
    }
    for(i=0;i<n;i++)
    {
         S +=(mx-a[i]);
    }
    cout<<S<<endl;
    return 0;
}
