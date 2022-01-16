#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		sort(arr, arr + n);
		int max_prize = 0;
		for (int i = 0; i < n; ++i)
		{
			max_prize += arr[i];
		}
		int ans = max_prize - arr[0];
		cout << ans << endl;
	}

	return 0;
}