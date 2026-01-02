#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long  n;
        cin >> n;
        long long count_pos = 0;
        long long count_neg=0;

        vector<long long > a(n);
        for (int i = 0; i < n; i++) {   
            cin >> a[i];               
            if (a[i] == 1) count_pos++; 
            else count_neg++;  
        }

        long long operations=0;
        while(count_pos<count_neg || count_neg%2==1){
            operations++;
            count_pos++;
            count_neg--;
        }
        cout<<operations<<endl;
    }
    return 0;
}
