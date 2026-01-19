#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin >> n;

    set<long long> s;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        s.insert(x);
    }

    long long k = s.size();

    while (s.find(k) == s.end()) {
        s.insert(k);
        k++;
    }

    cout << k << "\n";
}

int main() {
    fastio

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
