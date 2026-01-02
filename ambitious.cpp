#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   long long min_ope= INT_MAX;
    for(int i=0;i<n;i++){
        min_ope=min(min_ope,abs(a[i]));

    }
    cout<<min_ope<<endl;
        return 0;
}