#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif

	int n = 0, c = 0, t = 0, k = -9999, j = 0, i = 0;
	cin >> n;
	int a[n];
	for ( i = 0; i < n; i++)
	{
		cin >> a[i];
		k = max(k, a[i]);
	}
	sort(a, a + n);
	//cout << k;
	int b[k];
	for (i = 1; i <= k; i++)
	{
		b[i] = 0;
	}
	for (i = 0; i < n; i++)
	{
		b[a[i]]++;
	}
	for (i = 1; i <= k; i++)
	{
		if (b[i])
		{
			cout << i << " " << b[i] << endl;
		}
	}
	return 0;
}