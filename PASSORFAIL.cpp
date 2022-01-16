#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,x,p;
		cin>>n>>x>>p; //n=no. of quest., x=no. of correct answers, p=at least marks to pass
        int c = 3*x;
        int ic = -1*(n-x);  		      //+3,-1
        int score = c+ic;

        if(score>=p)
        {
        	cout<<"PASS"<<endl;
        }
        else cout<<"FAIL"<<endl;	
	}
	return 0;
}