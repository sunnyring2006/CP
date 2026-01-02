#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        int count_Y=0;
        for(char c:s){
            if(c=='Y') count_Y++;
        }

        if(count_Y<=1){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}