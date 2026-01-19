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
        string s;
        cin>>s;
        int  n=s.size();

        int count_zero=0;
        int count_one=0;

        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                count_zero++;
            }
            else{
                count_one++;
            }
        }
        int ope=min(count_one,count_zero);

        if(ope % 2 != 0){
            cout<<"DA"<<endl;
        }
        else{
            cout<<"NET"<<endl;
        }
    }
    return 0;
}
