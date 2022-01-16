#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		int x[n],y[n];
		int count=0,k,a,b;
		cin>>n;
		for (int i = 0; i < n; i++)
		{
			cin>>x[i];
			cin>>y[i];
		}
        for (int i = 0; i < n; i++)
        {
        	if (/* condition */)
        	{
        		x[i]=x[i]+k;
        		count++;
        	}
        	else if (/* condition */)
        	{
        		y[i]=y[i]+k;
        		count++;
        	}
        	else if (/* condition */)
        	{
        	  x[i]=x[i]+k;
        	  y[i]=y[i]+k;
        	  count++;
        	}
        	else if (/* condition */)
        	{
        		x[i]=x[i]+k;
        		y[i]=y[i]-k;   
        		count++;    
         	}
        }

	}
	return 0;
}