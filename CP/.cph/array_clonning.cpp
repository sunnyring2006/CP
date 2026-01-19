#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        unordered_map<long long, long long> mp;
        for (auto x : a) {
            mp[x]++;
        }

        long long mx = 0;
        for (auto &p : mp) {
            mx = max(mx, p.second);
        }

        long long ops = 0;

        while (mx < n) {
            ops++;  
            long long add = min(mx, n - mx);
            ops += add;  
            mx += add;
        }

        cout << ops << '\n';
    }
    return 0;
}
