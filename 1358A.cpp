#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,n,m,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        x=ceil((double)(n*m)/(double)2);
        cout<<x<<endl;
    }
    return 0;
}
