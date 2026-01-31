#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    int t;
    cin >> t;  
    while (t--) {
        ll n;
        cin>>n;
        char color;
        cin>>color;
        string s;
        cin>>s;

        s+=s;
        n *=2;

        ll last_green=-1;
        ll max_sec=INT_MIN;

        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='g')
            last_green=i;

            if(s[i]==color){
                ll diff=last_green-i;
                max_sec=max(max_sec,diff);
            }
        }
        cout << max_sec << endl;
    }
    return 0;
}
