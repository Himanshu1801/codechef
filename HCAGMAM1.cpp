#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int x, y;
		cin >> x >> y;
		string bin;
		cin >> bin;
		int c1 = 0, c2 = 0;
		int sal = 0;
		for (int i = 0; i < 30; i++)
		{
			if (bin[i] == '1') {
				sal += x;
				c1++;
			}
			else
			{	
				c2 = max(c1, c2);
				c1 = 0;
			}

		}

		c2 = max(c1, c2);

		sal += c2 * y;

		cout << sal << endl;
	}
	return 0;
}