#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    // Write your solution here
}

int main() {
    int t = 1;
    cin >> t;   // comment this if single test case
    while (t--){
        long long n;
        cin>>n;
        long long count_3=0;
        long long count_2=0;

        while (n > 0 && n % 3 == 0)
        {
			count_3++;
			n /= 3;
		}
        while (n > 0 && n % 2 == 0)
        {
			count_2++;
			n /= 2;
		}
        if (n > 1 || count_2 > count_3)
			cout << -1 << endl; 
        else
            cout << count_3 + (count_3 - count_2) << endl;
	}
	return 0;
}
   
