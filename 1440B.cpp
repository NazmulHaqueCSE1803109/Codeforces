#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const int N=2e5+100;
ll a[N];
int Main(){
    ll n, k;
    cin >> k >> n;
    for (int i=1;i<=n*k;i++){
        cin >> a[i];
    }
    ll x=(k+1)/2 - 1;
    x = k - x;
    ll z=n*k+1;
    ll ans=0;
    while(n--){
        z-=x;
        if (z<=0) break;
        ans+=a[z];
    }
    cout << ans << endl;
}
int32_t main(){
    ll t;
    cin >> t;
    while(t--){
        Main();
    }
}