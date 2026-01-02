#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long ope = INT_MAX;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] <= a[i + 1]) {
                long long diff = a[i + 1] - a[i];
                long long required_ope = diff / 2 + 1;
                ope = min(ope, required_ope);
            } else {
                ope = 0;
            }
        }

        if (ope == INT_MAX) ope = 0;
        cout << ope << endl;
    }
    return 0;
}
