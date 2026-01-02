#include<bits/stdc++.h>
using namespace std;

bool check (long long x)
{
    long long count_digits=0;
    long long count_zeros=0;
    while(x)
    {
        if(x%10==0)
          count_zeros++;
        count_digits++;
        x /=10;
    }
    return count_zeros==count_digits-1;

}

int main(){

    vector<long long>round_num;
    for(long long i=1;i<=999999;i++){
         if(check(i)==true)
            round_num.push_back(i);

    }
    int t;
    cin>>t;
    while(t--){
        long long  n;
        cin>>n;
        
        long long answer=0;
        for(int i=0;i<round_num.size();i++)
        {
           if(round_num[i]<=n)
             answer++;
         else 
           break;
        }
       cout<<answer<<endl;
    }
    return 0;
}