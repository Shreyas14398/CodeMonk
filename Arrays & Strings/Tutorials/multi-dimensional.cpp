#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif

	int m, n, i, j;
	cin >> m >> n;
	int a[m][n];
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
	for (j = 0; j < n; j++)
	{
		for (i = 0; i < m; i++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}