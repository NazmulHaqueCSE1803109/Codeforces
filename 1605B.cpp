#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T; cin >> T;
    while(T--)
    {
        int n; cin >> n;
        string s; cin >> s;
        string s1=s;
        sort(s1.begin(),s1.end());
        if(s1==s)
        {
            cout << 0 << "\n";
            continue;
        }

        string t = s;
        sort(t.begin(), t.end());
        cout << 1 << "\n";
        vector<int> ans;
        for(int i = 0; i < n; i++)
        {
            if(s[i] != t[i])
                ans.push_back(i+1);
        }
        cout << ans.size() << " ";
        for(int i = 0; i < ans.size(); i++)
            cout << ans[i] << " \n"[i+1 == ans.size()];
    }
    return 0;
}
