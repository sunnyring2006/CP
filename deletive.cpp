#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string s,t;
    cin>>s>>t;

    int n=s.size();
    int m=t.size();

    vector<int> arr(26,0);

    for(int i;i<m;i++){
        arr[t[i]-'A']++;
    }

    for(int i=n-1;i>=0;i--){
        if(arr[s[i]-'A']>0){
            arr[s[i]-'A']--;
        }
        else{
            s[i]='.';
        }
    }
    string final="";
    for(int i=0;i<n;i++){
        if(s[i]!='.')
        final +=s[i];
    }

    if(final==t){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
    
}
