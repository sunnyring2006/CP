#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        int count_zero=0,count_one=0;

        for(int i=0;i<n;i++){
            if(s[i]=='0')
              count_zero++;
            else{
                count_one++;
            }
        }
        int length_t=0;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='0' && count_one > 0)
            {
                count_one--;
                length_t++;
            }
            else if(s[i]=='1' && count_zero>0)
            {
                count_zero--;
                length_t++;
            }
            else{
                break;
            }
        }
        cout<<n-length_t<<endl;
    }
    return 0;
}