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
		int n = 0;
		cin >> n;
		int a[n][n];
		int i = 0, j = 0, k = 0, l = 0, c = 0;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				cin >> a[i][j];
			}
		}
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				for (k = 0; k < n; k++)
				{
					for (l = 0; l < n; l++)
					{
						if (a[i][j] > a[k][l] && i <= k && j <= l)
							c++;
					}
				}
			}
		}
		cout << c << endl;
	}
	return 0;
}