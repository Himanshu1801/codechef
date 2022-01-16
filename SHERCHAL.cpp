#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t > 0)
	{
		int a[8];
		for (int i = 0; i < 8; ++i)
		{
			a[i]=0;
		}
		string s;
		int n;
		cin >> n;
		cin >> s;
		n = s.length();
		
		for (int i = 0; i < n; i++)
		{
			if (s[i] == 's')
			{
				a[0]++;
			}
			else if (s[i] == 'h')
			{
				a[1]++;
			}
			else if (s[i] == 'e')
			{
				a[2]++;
			}
			else if (s[i] == 'r')
			{
				a[3]++;
			}
			else if (s[i] == 'l')
			{
				a[4]++;
			}
			else if (s[i] == 'o')
			{
				a[5]++;
			}
			else if (s[i] == 'c')
			{
				a[6]++;
			}
			else if (s[i] == 'k')
			{
				a[7]++;
			}
		}
		sort(a, a+8);
		cout << a[0] << endl;
		t--;
	}

	return 0;
}