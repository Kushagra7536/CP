#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n,a,b;
		cin>>n>>a>>b;

		if(a==b){
			if(n==a) cout<<"YES"<<endl;
			else if(n>a+b+1) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
		else{
			if(n>a+b+1) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
}