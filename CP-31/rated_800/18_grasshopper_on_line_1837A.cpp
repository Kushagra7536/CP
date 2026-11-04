#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int x,k;
		cin>>x>>k;
		vector<int> v;

		if(x%k==0){
			v.push_back(x-1);
			v.push_back(1);
		}
		else{
			v.push_back(x);
		}

		cout<<v.size()<<endl;
		for(auto x : v) {cout<<x<<" ";}
		cout<<endl;

	}
}