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

         int balance = 0;
        int moves = 0;

        for(char c : s){
            if(c == '('){
                balance++;
            } else {
                if(balance > 0){
                    balance--;
                } else {
                    moves++;  
                }
            }
        }

        cout << moves << "\n";   

    }
}