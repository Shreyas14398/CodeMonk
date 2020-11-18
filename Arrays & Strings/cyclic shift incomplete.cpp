#include <bits/stdc++.h>
using namespace std;
int binaryToDecimal(std::vector<int> v)
{
	int len = v.size();

	int decimalValue = 0;

	for (int i = len - 1; i >= 0; i--)
	{
		decimalValue = decimalValue + v[i] * pow(2, len - i - 1);
	}

	return decimalValue;
}

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
		int n = 0, k = 0, i = 0, d = 10, m = -1, r = 0, c = 0;
		string s;
		cin >> n >> k;
		std::vector<int> v;
		cin >> s;
		for (i = 0; i < s.length(); i++)
		{
			v.push_back(s[i]);
		}
		// for (int j = 0; j < v.size(); j++)
		// {
		// 	cout << v[j];

		// }
		// cout << " " << binaryToDecimal(v);
		// cout << endl;
		m = max(m, binaryToDecimal(v));
		for (i = 0; i < n - 1; i++)
		{
			std::rotate(v.begin(), v.begin() + 1, v.end());
			// for (int j = 0; j < v.size(); j++)
			// {
			// 	cout << v[j];
			// }
			// cout << " " << binaryToDecimal(v);
			// cout << endl;
			m = max(m, binaryToDecimal(v));

		}
		//cout << m << endl;
		std::rotate(v.begin(), v.begin() + 1, v.end());
		// for (int j = 0; j < v.size(); j++)
		// {
		// 	cout << v[j];

		// }
		for (i = 0; i < 2 * k * (n - 1); i++)
		{
			if (m == binaryToDecimal(v))
			{
				c++;
				if (c == k)
					break;
				else
					r++;
			}
			else
			{
				r++;
			}
			std::rotate(v.begin(), v.begin() + 1, v.end());

		}
		cout << r << endl;

	}
	return 0;
}