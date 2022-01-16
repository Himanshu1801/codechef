#include <bits/stdc++.h>
using namespace std;

set<char> vowels = {'a', 'e', 'i', 'o', 'u'};

bool is_vowel(char c) {
	return vowels.count(c);
}

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string s, p;
		cin >> s >> p;
		int ans = 1e9;
		for (char c = 'a'; c <= 'z'; c++) {
			int curr = 0;
			for (int i = 0; i < n; ++i)
			{
				char si = (s[i] == '?' ? c : s[i]);
				char pi = (p[i] == '?' ? c : p[i]);
				if (si == pi) continue;
				curr += (is_vowel(si) != is_vowel(pi) ? 1 : 2);
			}
			ans = min(ans, curr);
		}
		cout << ans << endl;
	}
	return 0;
}