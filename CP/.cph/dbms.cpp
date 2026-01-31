#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, s, x;
        cin >> n >> s >> x;

        vector<int> a(n);
        for(int i=0;i<n;i++){
                cin >> a[i];
        }
        
        int sum_of_a = 0;
        for (int i = 0; i < n; i++) {
            sum_of_a += a[i];
        }

        if (sum_of_a <= s && (s - sum_of_a) % x == 0)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }
    return 0;
}
