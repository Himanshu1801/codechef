#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	int a,b;
	cin>>t;
	while(t--)
	{
       cin>>a>>b;
       if(a>0 && b>0){
       	cout<<"Solution";
       }
       else if (b==0)
       {
       	cout<<"Solid";
       }
       else if (a==0)
       {
       	cout<<"Liquid";
       }
	}
	return 0;
}