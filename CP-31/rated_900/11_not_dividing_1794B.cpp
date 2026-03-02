#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<long long> v(n);
		for(int i=0; i<n; i++) cin>>v[i];

		while(true){
			bool flag=false;
			for(int i=0; i<n-1; i++){
				if(v[i]==1) {v[i]++; flag=true;}
				if(v[i+1]%v[i]==0) {v[i+1]++; flag=true;}
			}
			if(!flag) break;
		}

		for(int i=0; i<n; i++){
			cout<<v[i]<<" ";
		}

		cout<<endl;
	}
}