#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
         
        int flag=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++){
                if(__gcd(a[i],a[j])<=2)
                {
                    flag=1;
                }
            }
        }

        if(flag==0)
         cout<<"No"<<endl;
        else
          cout<<"Yes"<<endl;
    }
    return 0;
}