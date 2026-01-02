#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    bool found=false;
    for(int i=0,x;i<n;i++){
        cin>>x;
        if(x==k) found=true;
    }
    cout<<(found ? "Yes\n":"NO\n");
}
  return 0;
}