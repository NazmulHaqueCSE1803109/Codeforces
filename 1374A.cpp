#include<iostream>
using namespace std;
int main()
{
    int t,x,y,n,i,k;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>x>>y>>n;
        k=x*(n/x)+y;
        if(k>n)
            cout<<k-x<<endl;
        else
            cout<<k<<endl;
    }
    return 0;
}
