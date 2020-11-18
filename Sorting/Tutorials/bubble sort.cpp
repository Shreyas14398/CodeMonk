#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif

	int n = 0, c = 0, t = 0;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int k = 0; k < n - 1; k++)
	{
		for (int i = 0; i < n - k - 1; i++)
		{
			if (a[ i ] > a[ i + 1] ) {
				c++;
				t = a[ i ];
				a[ i ] = a[ i + 1 ];
				a[ i + 1] = t;
			}
		}

	}
	cout << c << endl;
	return 0;
}