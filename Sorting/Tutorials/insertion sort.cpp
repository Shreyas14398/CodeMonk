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
		b[i] = a[i];
	}

	for (i = 0; i < n; i++)
	{
		t = a[i];
		j = i;
		while (j > 0 && t < a[j - 1])
		{
			a[j] = a[j - 1];
			j = j - 1;
		}
		a[j] = t;
	}
	for ( i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (b[i] == a[j])
			{
				b[i] = j + 1;
			}
		}
	}
	for (i = 0; i < n; i++)
		cout << b[i] << " ";
	return 0;
}