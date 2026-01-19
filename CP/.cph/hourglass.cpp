#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;
    while(t--){
        long long  s,k,m;
        cin>>s>>k>>m;

        long long elapsed=m%k;
        long long remained =s-elapsed;

        cout<<max(0LL,remained)<<endl;
    }
   return 0;
}