#include <bits/stdc++.h>
std::map<char, int> map;
int main() {
    int n;
    char str[1007];
    scanf("%d", &n);
    while (n--) {
        scanf("%s", str);
        map[str[0]]++;
    }
    long long ans = 0;
    for (auto it : map) {
        int a = it.second / 2, b = it.second - a;
        ans += a * (a - 1) / 2;
        ans += b * (b - 1) / 2;
    }
    printf("%lld\n", ans);
    return 0;
}