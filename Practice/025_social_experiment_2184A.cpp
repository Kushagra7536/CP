#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		if(n==2) cout<<"2"<<endl;
		else if(n==3) cout<<"3"<<endl;
		else{
			if(n%2==0) cout<<"0"<<endl;
			else cout<<"1"<<endl;
		}
	}
}


// every odd number can be represented as the sum of 
// (a multiple of 2) + (a multiple of 3)


// odd no. of people means always a difference of 1 
// even no. means always a difference of 0 