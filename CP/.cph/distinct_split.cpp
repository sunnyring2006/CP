#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<long long> prefix_unique_count(n + 1, 0);
        vector<long long> suffix_unique_count(n + 2, 0);

        unordered_set<char> st1, st2;

        for (int i = 1; i <= n; i++) {
            st1.insert(s[i - 1]);
            prefix_unique_count[i] = st1.size();
        }

        for (int i = n; i >= 1; i--) {
            st2.insert(s[i - 1]);
            suffix_unique_count[i] = st2.size();
        }

        long long ans = 0;
        for (int i = 0; i < n; i++) {
            ans = max(ans, prefix_unique_count[i] + suffix_unique_count[i + 1]);
        }

        cout << ans << endl;
    }
    return 0;
}
