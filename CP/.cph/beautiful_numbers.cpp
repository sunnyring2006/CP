#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int solve(int n){
    vector<int> ans;

    while(n>0){
    int unit_digit=n%10;
    n /= 10;
    ans.push_back(unit_digit);

    ans.pop();
    }

}


int main() {
    int t ;
    cin >> t;   // comment this if single test case
    while (t--){
        int l,r,k,d;
        cin>>l>>r>>k>>d;

        int count_beautiful=0;

        for(int i=l;i<r;i++){
           if(i%k==0){
            count_beautiful++;
           }
        }
    }
    return 0;
}
