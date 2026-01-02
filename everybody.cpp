#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        for(long long  i=0;i<n;i++){
            cin>>a[n];
        }
        long long oper_count=0;
        for(long long  i=0;i<n-1;i++)
        {
            if((a[i]%2)==(a[i+1]%2))
            oper_count++;
        }
        cout<<oper_count<<endl;
    }
    return 0;
}