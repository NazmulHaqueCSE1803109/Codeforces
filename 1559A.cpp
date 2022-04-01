#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int ans = a[0];
    for (int i = 1; i < n; ++i) {
        ans = (ans & a[i]);
    }
    cout << ans << endl;
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}