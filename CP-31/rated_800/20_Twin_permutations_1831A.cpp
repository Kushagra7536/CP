#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> v(n);
		for(int i=0; i<n; i++) {cin>>v[i];}
		auto maxx = max_element(v.begin(),v.end());
		auto minn = min_element(v.begin(),v.end());
		int sum = *maxx + *minn;
		for(int i=0; i<n; i++) {cout<<sum-v[i]<<" ";}
		cout<<endl;
	}
}