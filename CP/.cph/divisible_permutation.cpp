#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    int t;
    cin >> t;  
    while (t--) {
        ll n;
        cin>>n;

        vector<long long> p(n + 1);
        p[n] = 1;

        for (int i = n - 1; i >= 1; i--) {
            if (i % 2 == 1)
                p[i] = p[i + 1] + i;
            else
                p[i] = p[i + 1] - i;
        }

        long long mn = *min_element(p.begin() + 1, p.end());
        for (int i = 1; i <= n; i++) {
            p[i] += (1 - mn);
        }

        for (int i = 1; i <= n; i++) {
            cout << p[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
