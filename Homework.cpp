#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a;
        cin>>a;
        int m;
        cin>>m;
        string b;
        cin>>b;
        string c;
        cin>>c;

        string left="",right="";
        for(int i=0;i<m;i++){
            if(c[i]=='V'){
                left=b[i]+left;
            }
            else{
                right +=b[i];
            }
        }
        cout<<left+a+right<<endl;

    }
    return 0;
}