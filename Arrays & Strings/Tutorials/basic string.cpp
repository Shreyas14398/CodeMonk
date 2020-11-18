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
		string s;
		int a, b;
		cin >> s >> a >> b;
		int i;
		for (i = 0; i < a; i++)
			cout << s[i];
		string x = s.substr(a, b - a + 1);
		sort(x.begin(), x.end());
		reverse(x.begin(), x.end());
		cout << x;
		for (i = b + 1; i < s.length(); i++)
			cout << s[i];
		cout << endl;
	}
	return 0;
}