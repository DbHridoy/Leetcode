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

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> ans;
//         map<long long, long long> m, c;

//         long long l = nums.size();
//         for (long long i = 0; i < l; i++) {
//             m[nums[i]] = i;
//             c[nums[i]]++;
//         }
//         int f;
//         for (long long i = 0; i < l; i++) {
//             f = target - nums[i];
//             if (f == nums[i] && c[f] > 1) {
//                 ans.push_back(i);
//                 ans.push_back(m[f]);
//                 // return ans;
//                 // cout << "[" << i << "," << m[f] << "]" << endl;
//                 break;
//             } else if (f != nums[i] && c[f] > 0) {
//                 ans.push_back(i);
//                 ans.push_back(m[f]);
//                 // return ans;
//                 // cout << "[" << i << "," << m[f] << "]" << endl;
//                 break;
//             }
//         }
//         return ans;
//     }
// };

void solve() {
    int n, t;
    cin >> n >> t;
    int a[n];
    map<int, int> m, c;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        c[a[i]]++;
        m[a[i]] = i;
    }
    int f;
    for (int i = 0; i < n; i++) {
        f = t - a[i];
        if (f == a[i] && c[f] > 1) {
            cout << "[" << i << "," << m[f] << "]" << endl;
            break;
        } else if (f != a[i] && c[f] > 0) {
            cout << "[" << i << "," << m[f] << "]" << endl;
            break;
        }
    }
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
