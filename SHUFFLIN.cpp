#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for (int i = 1; i <= n; i++)
		{
			cin>>a[i]; 
		}
		int even=0;
		int odd=0;
		for (int i = 1; i <= n; i++)
		{
			if ((a[i]+i)%2==0)
			{
				if(a[i]%2==0)
				{
					even++;
				}
				else
					odd++;
			}
		}
		int ans = 0;
		ans = abs(even-odd);
		ans = n - ans;
		cout<<ans<<endl;
	}
	return 0;
}