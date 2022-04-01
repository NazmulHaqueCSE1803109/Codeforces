#include<iostream>
#define ll  long long int
#define ln  cout<<endl;
using namespace std;

int main()
{
    int t,n,k;
    ll ans,mod=1e9+7;
    cin>>t;;
    while(t-->0)
    {
        cin>>n>>k;
        ans=1;
        for(int i=0;i<k;i++) ans=(ans*n)%mod;
        cout<<ans;ln
    }
    return 0;
}
