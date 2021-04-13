#include<iostream>
using namespace std;
int main()
{
    int n,i,mx,mn,c=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    mx=mn=a[0];
    for(i=1;i<n;i++)
    {
        if(mx<a[i])
        {
            c++;mx=a[i];
        }
        if(mn>a[i])
        {
            c++;mn=a[i];
        }
    }
    cout<<c<<endl;
    return 0;
}

