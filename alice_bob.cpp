#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
       int n,a;
       cin>>n>>a;
       vector<int> v(n);
       for(int i=0;i<n;i++){
        cin>>v[i];
       }
       long long maxMid = LLONG_MIN;

        for(int i = 0; i < n; i++) {
            long long mid = (v[i] + a) / 2;  
            maxMid = max(maxMid, mid);
        }

        long long b = maxMid + 1;

        cout << b << "\n";
    }

    return 0;
}