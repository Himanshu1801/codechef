#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,b;
		string s;
		cin>>n>>a>>b;
		cin>>s;
		n=s.length();
	
		int c1 = 0; 
		int c2 = 0;
		for (int i = 0; i < n; i++)
		{
			if (s[i]=='0')
			{
				c1=c1+a;
			}
			else
				c2=c2+b;
		}
		cout<<c1+c2<<endl;
	}
	return 0;
}