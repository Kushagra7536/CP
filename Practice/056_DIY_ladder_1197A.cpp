#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> v(n);
		for(int i=0; i<n; i++) cin>>v[i];

		sort(v.begin(),v.end(),greater<int>());

		// for(auto x:v) cout<<x<<" ";
		// cout<<endl;

		cout<<min(min(v[0],v[1]),n-1)-1<<endl;
	}

}