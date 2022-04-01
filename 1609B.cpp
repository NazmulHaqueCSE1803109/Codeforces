#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pii pair<ll, ll>
#define pll pair<long long, long long>
#define pb push_back
#define ff first
#define ss second
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nn "\n"
#define sci(x) scanf("%d", &x)
#define LL_INF (1LL << 62)
#define INF (1 << 30)
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) !!(x & (1LL << k))
#define mod 1000000007
#define N 5000005

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;

        string s;
        cin >> s;

        int cnt = 0;

        for(int i = 0; i < n-2; i++){
            if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='c') cnt++;
        }

        while(q--){
            int x;
            char c;

            cin >> x >> c;

            x--;

            if(s[x]==c){
                cout << cnt << nn;
                continue;
            }

            if(x+2<n && s[x]=='a' && s[x+1]=='b' && s[x+2]=='c') cnt--;
            if(x+1<n && x-1>=0 && s[x-1]=='a' && s[x]=='b' && s[x+1]=='c') cnt--;
            if(s[x-2]>=0 && s[x-2]=='a' && s[x-1]=='b' && s[x]=='c') cnt--;

            s[x] = c;

            if(x+2<n && s[x]=='a' && s[x+1]=='b' && s[x+2]=='c') cnt++;
            if(x+1<n && x-1>=0 && s[x-1]=='a' && s[x]=='b' && s[x+1]=='c') cnt++;
            if(s[x-2]>=0 && s[x-2]=='a' && s[x-1]=='b' && s[x]=='c') cnt++;

            cout << cnt << nn;
        }

    }
    
    return 0;
}