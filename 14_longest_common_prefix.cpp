/*------------------second attempt------------------*/
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
    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    // string ans = "";
    for (int i = 0; i < s[0].length(); i++) {
        for (int j = 0; j < n; j++) {
            if (s[0][i] != s[j][i]) {
                // cout << ans << endl;
                cout<<s[0].substr(0,i)<<endl;
                return;
            }
        }
        // ans += s[0][i];
    }
    cout<<s[0]<<endl;
    // cout << ans << endl;
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

/*------------------first attempt------------------*/

// #include <bits/stdc++.h>

// #define int long long
// #define endl '\n'
// #define vec vector<long long>
// #define moc map<char, long long>
// #define moi map<long long, long long>
// #define faster                    \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0)

// using namespace std;

// void solve() {
//     int n;
//     cin >> n;
//     string s[n];
//     for (int i = 0; i < n; i++) {
//         cin >> s[i];
//     }
//     string t = "";
//     string ans = "";
//     string o = "";
//     int c = 0;
//     for (int i = 0; i < s[0].length(); i++) {
//         t += s[0][i];
//         // cout << "t = " << t << endl;
//         for (int j = 0; j < n; j++) {
//             // cout << s[j] << endl;
//             o = "";
//             for (int k = 0; k <= i; k++) {
//                 o += s[j][k];
//                 // cout << "o = " << o << endl;
//             }
//             if (t != o) {
//                 cout << ans << endl;
//                 c = 1;
//                 break;
//                 // return 0;
//             }
//             // if (c == 1) break;
//         }
//         if (c == 1) break;
//         ans = t;
//     }
//     if (c != 1) cout << ans << endl;
// }
// int32_t main() {
//     faster;
//     // freopen("../../input.txt", "r", stdin);
//     // freopen("../../output.txt", "w", stdout);
//     int tc;
//     cin >> tc;
//     while (tc--) {
//         solve();
//     }
//     return (0);
// }
