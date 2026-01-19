#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    int t;
    cin >> t;   // comment this if single test case
    while (t--) {
        long long n,k;
        cin>>n>>k;

        vector<long long> a(n*k);

        for(int i=0;i<n*k;i++){
            cin>>a[i];
        }
        
        long long pointer=n*k;

        long long sum=0;
        while(k--){
            pointer -=(n/2+1);
            sum += a[pointer];
        }
        cout<<sum<<endl;
    }
    return 0;
}
