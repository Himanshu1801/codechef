#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		int a = 0;
		int b = 0;
		for (int i = 0; i < n; i++) {
			if (s[i] == '0') {
				a++;
			}
			else {
				b++;
			}
		}
		int answer = 0;
		answer = max(answer, min(a, b) - 1);
		cout << answer << endl;
	}
	return 0;
}