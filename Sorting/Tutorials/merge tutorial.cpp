#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif

	int n = 0, c = 0, t = 0, k = 0, j = 0, i = 0;
	cin >> n;
	int a[n], b[n];
	for ( i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
				c++;
		}
	}
	cout << c;
	return 0;
}