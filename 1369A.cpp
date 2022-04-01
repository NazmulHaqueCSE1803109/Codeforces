#include<iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t-->0)
    {
        cin>>n;
        if(n%4==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
