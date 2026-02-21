#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        for(char &c : s) c = tolower(c);

        if(s.find("wce") != string::npos && s.find("codechef") != string::npos)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
