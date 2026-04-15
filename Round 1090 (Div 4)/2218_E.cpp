#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		long long n; cin>>n;
		vector<long long> v(n);
		for(int i=0; i<n; i++) cin>>v[i];

		// sort(v.begin(),v.end());

		for(int i=n-1; i>=0; i--){
			sort(v.begin(),v.begin()+i+1);
			for(int j=0; j<i; j++){
				v[j]=v[j]^v[i];
			}
		}

		cout<<v[0]<<endl;

		for(auto x:v) cout<<x<<" ";
		cout<<endl;
	}
}