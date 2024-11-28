#include <bits/stdc++.h>

#define int long long
#define endl '\n'
#define vec vector<long long>
#define moc map<char, long long>
#define moi map<long long, long long>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)

using namespace std;

void solve() {
    string s;
    cin >> s;
    map<char, int> m = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
    int l = s.length();
    int ans = 0;
    // if (m[s[0]] < m[s[1]])
    //     ans = ans - m[s[0]];
    // else
    //     ans = ans + m[s[0]];
    for (int i = 0; i < l - 1; i++) {
        if (m[s[i]] < m[s[i + 1]])
            ans -= m[s[i]];
        else
            ans += m[s[i]];
        // ans = ans + m[s[i]];
    }
    ans += m[s[l - 1]];
    cout << ans << endl;
}

int32_t main() {
    faster;
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return (0);
}
