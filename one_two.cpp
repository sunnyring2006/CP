#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long  n;
        cin>>n;
        long long  a[n];
        for(int i=0;i<n;i++){
           cin>>a[i];
        }
        long long total_two=0;
        long long curr_two=0;

        for(int i=0;i<n;i++){
            if(a[i]==2)
              total_two++;
        }
        long long ans=-1;

        for(long long i=0;i<n;i++)
        {
            if(a[i]==2)
            curr_two++;

            if(curr_two==total_two-curr_two)
            {
                ans=i+1;
                break;
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}