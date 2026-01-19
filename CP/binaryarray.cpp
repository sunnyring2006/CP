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
        int n;
        ciin>>n;
        int count_zero=0;
        int count_one=0;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                count_zero++;
            }
            else{
                count_one++;
            }
            
        }
        if(count_one>=count_zero){
                cout<<"Alice"<<endl;
            }
        else{
            cout<<"Bob"<<endl;
        }
    }
   return 0;
}
