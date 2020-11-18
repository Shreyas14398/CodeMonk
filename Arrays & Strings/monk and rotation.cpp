#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif

	int t = 0;
	cin >> t;
	while (t--)
	{
		int k, n, i;
		cin >> n >> k;
		int a[n];
		for (i = 0; i < n; i++)
			cin >> a[i];
		int b[n];
		for (i = 0; i < n; i++)
		{
			b[(i + k) % n] = a[i];
		}
		for (i = 0; i < n; i++)
			cout << b[i] << " ";

		cout << endl;
	}
	return 0;
}