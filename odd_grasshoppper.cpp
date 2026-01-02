#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,n;
        cin>>x>>n;
        long long final_position;

        if(n%4==1){
           final_position= -n;
        }
        
        else if(n%4==2){
            final_position=1;
        }
        else if(n%4==3){
            final_position=n+1;

        }
        else {
          final_position=0;
        }
        
        if(x%2==0){
            final_position=x+final_position;
        }
        else{
            final_position=x-final_position;
        }

        cout<<final_position<<endl;
    }

    return 0;

}