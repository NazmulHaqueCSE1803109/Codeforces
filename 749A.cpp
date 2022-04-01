#include<iostream>
using namespace std;

int main()
{
    int n,x,i;
    cin>>n;
    if(n%2==0)
    {
        x=n/2;
        cout<<x<<endl;
        for(i=0;i<x;i++)
            cout<<2<<" ";
        cout<<endl;
    }
    else
    {
        n=n-3;
        x=n/2;
        cout<<x+1<<endl;
        for(i=0;i<x;i++)
            cout<<2<<" ";
        cout<<3<<endl;
    }
    return 0;
}
