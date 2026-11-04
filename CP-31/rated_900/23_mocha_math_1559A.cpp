#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t; cin>>t;
	while(t--){
		long long n; cin>>n;
		vector<long long> v(n);
		for(long long i=0; i<n; i++) cin>>v[i];
		
		long long ans=v[0];
		long long i=0;
		while(i<n){
			ans&=v[i];
			i++;
		}

		cout<<ans<<endl;
	}

}
