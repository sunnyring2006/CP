#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        bool continuous_three=false;
        int total_empty=0;

        for(int i=0;i<n;i++){
            if(s[i]=='.' && i+1<n && s[i+1]=='.' && i+2<n && s[i+2]=='.')
            {
                continuous_three=true;
                break;
            }
            if(s[i]=='.')
            total_empty++;  
        }
        if(continuous_three){
            cout<<2<<endl;
        }
        else{
            cout<<total_empty<<endl;
        }
    }
    return 0;
}