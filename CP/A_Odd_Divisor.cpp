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
        
        while(n%2==0){
            n=n/2;
        }
        if(n>1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }  
    }
    return 0;
}
