#include <bits/stdc++.h>
using namespace std;

int main()
{

	long long t;
	cin >> t;
	while (t--)
	{
		long long  n;
		cin >> n;
		int count_zero = 0;
		int count_ones = 0;
		vector<int> a(n);
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n; i++)
		{
			if (a[i] == 0)
			{
				count_zero++;
			}
			if (a[i] == 1)
			{
				count_ones++;
			}

		}
		
			long long  c = pow(2, count_zero) * count_ones;

			cout << c << endl;
	}

	return 0;
}
