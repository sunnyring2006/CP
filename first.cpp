#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
    int n;
    if(!(cin>>n)) return;
    
    vector<long long> v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    long long cur_s=-v[n-1];
    long long best_diff=v[n-1];
    long long ans=0;
    
    for(int i=n-2;i>=0;--i){
        long long val=v[i];
        long long opt=cur_s + max(0LL, val + best_diff);
        
        cur_s-=val;
        best_diff=max(best_diff, opt-cur_s);
        
        if(i==0) ans=opt;
    }
    cout<<ans<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if(cin>>t){
        while(t--){
            solve();
        }
    }
    return 0;
}