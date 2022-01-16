#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		string s;
		cin>>n;
        cin>>s;
        int ans = 0;

        for (int i = 0; i < n-1; i++)
        {
        	if (s[i]==s[i+1])
        	{
        		cout<<"YES"<<endl;
        		break;	
        	}
        	// else cout<<"NO"<<endl;
        }
        
	}
	return 0;
}