#include <bits/stdc++.h>
#define ll long long int
#define nl endl
using namespace std;


int main()
{
    int t;
    long long int n,ans;
    cin>>t;
    while(t-->0)
    {
        cin>>n;
        ans=1;
        while(ans<=n)
        {
            ans *=2;
        }
        ans /=2;
        ans--;
        cout<<ans<<nl;
    }

    return 0;
}
