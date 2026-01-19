#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    int t;
    cin >> t;   // comment this if single test case
    while (t--){
        string s;
        cin>>s;
       
        int n=s.size();

        if(s[0] != s[n-1])
        {
            if(s[0]=='a'){
                s[0]='b';
            }
            else{
                s[0]='a';
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
