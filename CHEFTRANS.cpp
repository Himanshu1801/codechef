#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int x,y,z;
		cin>>x>>y>>z;
		if(x+y>z){
			cout<<"TRAIN"<<endl;
		}
		else if(x+y == z){
			cout<<"EQUAL"<<endl;
		}
		else {
			cout<<"PLANEBUS"<<endl;
		}
	}
	return 0;
}