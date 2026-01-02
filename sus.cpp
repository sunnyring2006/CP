#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string r;
        cin>>r;

        int n=r.size();

        for(char c:r){
            assert(c=='s' || c=='u');
        }

        
        vector<int> pos;
        for (int i = 0; i < n; i++) {
            if (r[i] == 's') pos.push_back(i);
        }

       
        if (pos.empty()) {
            cout << (n + 1) / 2 << '\n';
            continue;
        }

      
        if (pos.size() == 1) {
            cout << n / 2 << '\n';
            continue;
        }

      
        int ops = 0;

    
        if (pos[0] != 0) ops++;

        
        if (pos.back() != n - 1) ops++;

       
        for (int i = 1; i < (int)pos.size(); i++) {
            int gap = pos[i] - pos[i - 1] - 1;
            if (gap > 1) {
                ops += (gap - 1) / 2;
            }
        }

        cout << ops <<endl;
    }

    return 0;
}