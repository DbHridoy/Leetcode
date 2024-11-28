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
    int x;
    cin >> x;
    string s = to_string(x);
    int l = s.length();
    for (int i = 0, j = l - 1; i < l / 2 && j >= l / 2; i++, j--) {
        if (s[i] != s[j]) {
            cout << "false" << endl;
            return;
        }
    }
    cout << "true" << endl;
    //   return ;
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
