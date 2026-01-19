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
        int n,x;
        cin>>n>>x;
        vector<long long >a(n);
        long long min=0,max=0;

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            max +=ceil(a[i]*1.0/x);

            min += a[i];
        }
        min =ceil(min* 1.0/x);

        cout<<min<<" "<<max<<endl;
    }
    return 0;
}
