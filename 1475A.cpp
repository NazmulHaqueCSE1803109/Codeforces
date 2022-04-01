#include<iostream>
#define ll long long int
using namespace std;

int main()
{
    ll n,t,i,f=0;
    cin>>t;
    while(t-->0)
    {
        cin>>n;
        while(n%2==0)
        {
            n /=2;
        }

        if(n==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
