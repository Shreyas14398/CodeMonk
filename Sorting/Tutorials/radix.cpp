#include <bits/stdc++.h>
using namespace std;
void countsort(int arr[], int n, int place)
{
	int range = 10;
	int i, freq[10] = {0};
	int output[n];
	for (i = 0; i < n; i++)
		freq[(arr[i] / place) % range]++;
	for (i = 1; i < range; i++)
		freq[i] += freq[i - 1];
	for (i = n - 1; i >= 0; i--)
	{
		output[freq[(arr[i] / place) % range] - 1] = arr[i];
		freq[(arr[i] / place) % range]--;
	}
	for (i = 0; i < n; i++)
	{
		arr[i] = output[i];
		cout << arr[i] << " ";
	}
	cout << endl;
}
void radixsort(int arr[], int n, int maxx)
{
	int mul = 1;
	while (maxx)
	{
		countsort(arr, n, mul);
		mul *= 10;
		maxx /= 10;
	}
}
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
	radixsort(a, n, k);
	return 0;
}