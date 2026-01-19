#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        bool found = false;

        for (int j = 1; j <= n - 2 && !found; j++) {
            int i = -1, k = -1;

            
            for (int left = 0; left < j; left++) {
                if (p[left] < p[j]) {
                    i = left;
                    break;
                }
            }

            
            for (int right = j + 1; right < n; right++) {
                if (p[right] < p[j]) {
                    k = right;
                    break;
                }
            }

            if (i != -1 && k != -1) {
                cout << "YES\n";
                cout << i + 1 << " " << j + 1 << " " << k + 1 << "\n";
                found = true;
            }
        }

        if (!found)
            cout << "NO\n";
    }

    return 0;
}
