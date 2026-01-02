#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long count_zeros = 0;
        long long max_len = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                count_zeros++;
            } else {
                count_zeros = 0;
            }
            max_len = max(max_len, count_zeros);
        }

        cout << max_len << endl;
    }
    return 0;
}
