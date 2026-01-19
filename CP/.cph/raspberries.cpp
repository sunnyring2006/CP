#include<bits.stdc++.h>
using namespace std;

int main()
{
    int t;
    ciin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        int even_count=0;
        int ans=INT_MAX;

        vector<int> a(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]%k==0){
            cout<<0<<endl;
            }

            if(a[i]%2==0){
                even_count++;
            }

            ans=min(ans,(k-a[i]%k));
        }

        

        

    }
}