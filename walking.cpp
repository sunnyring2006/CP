#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        if(d<b){
            cout<<-1<<endl;
            continue;
        }
        long long  moves=d-b;
        long long a_new=a+moves;

        if(a_new<c){
            cout<<-1<<endl;
            continue;
        }
        moves +=(a_new-c);
        cout<<moves<<endl;
    }
    return 0;
}