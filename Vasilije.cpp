#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long  n,k,x;
        cin>>n>>k>>x;
        if(x<n)  cout<< "No"<<endl;
        long long  max=n*k;
        long long  min=(n*(n+1))/2;
        if(x>min && x<max ){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }


    }
    return 0;

}