#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    long long n;
    cin>>n;
    int count_1=0;
    int count_neg1=0;
    int count_zeros=0;
    vector<long long>a(n);
    for(int i=0;i<n;i++){
        if(a[i]==0){
            count_zeros++;
        }
        else if(a[i]==-1) count_neg1++;
    }

    int ans=count_zeros+count_neg1;

    cout<<ans<<endl;

    return 0;

}