#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t; cin>>t;
	while(t--){
		long long n,k; cin>>n>>k;
		vector<long long> v(n*k);

		for(long long i=0; i<(n*k); i++) cin>>v[i];

		long long i = (n*k);
		long long sum=0;

		while(k--){
			i-=(n/2 + 1);
			sum+=v[i];
		}

		cout<<sum<<endl;

	}
}