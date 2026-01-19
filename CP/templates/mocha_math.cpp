#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);


int main() {
    int t ;
    cin >> t;   // comment this if single test case
    while (t--) {
        ll n;
        cin>>n;
        vector<long long > a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        long long total_and=a[0];
        for(long long i=1;i<n;i++){
            total_and &=a[i];
        }
        cout<<total_and<<endl;    
          
    }
    return 0;
}
