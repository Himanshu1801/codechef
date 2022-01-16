#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, x;
		cin >> n >> x;
		map<int, int> m;
		vector<int> a;
		for (int i = 0; i < n; i++)
		{
			int v;
			cin>>v;
			a.push_back(v);
			m[v]++;
		}
		int ans = 0;
		int c = 0;
		for (int i:a)
		{
			if ((i != i ^ x) && ans < m[i] + m[i ^ x])
			{
				ans = m[i] + m[i ^ x];
				c = m[i ^ x];
			}
			else if ((i != i ^ x) && ans == m[i] + m[i ^ x] && c > m[i ^ x])
			{
				ans = m[i] + m[i ^ x];
				c = m[i ^ x];
			}
			else if (ans < m[i])
			{
				ans = m[i];
				c = 0;
			}
		}
		cout << ans << " " << c << endl;
	}
	return 0;
}