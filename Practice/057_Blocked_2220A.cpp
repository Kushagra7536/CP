#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> v(n);
		for(int i=0; i<n; i++) cin>>v[i];

		sort(v.begin(),v.end(),greater<int>());

		bool possible=true;
		for(int i=0; i<n-1; i++){
			if(v[i]==v[i+1]){
				possible=false;
				break;
			}
		}

		if(possible){
			for(auto x:v){
				cout<<x<<" ";
			}
			cout<<endl;
		}
		else cout<<"-1"<<endl;
	}
}