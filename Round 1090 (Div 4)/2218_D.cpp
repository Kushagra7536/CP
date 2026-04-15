#include<bits/stdc++.h>
using namespace std;

	bool is_prime(long long n){
	    if(n < 2) return false;
	    if(n == 2) return true;
	    if(n % 2 == 0) return false;
	    // to check only odd divisors uto sqrt(n)
	    for(long long i = 3; i * i <= n; i += 2){
	        if(n % i == 0) return false;
	    }
	    return true;
	}

int main(){

	vector<long long> primes;
	for(long long i=2; i<=200000; i++){
		if(is_prime(i)){
			primes.push_back(i);
		}
	}

	int t; cin>>t;
	while(t--){
		long long n; cin>>n;
		for(long long i=0; i<n; i++){
			cout<<primes[i]*primes[i+1]<<" ";
		}
		cout<<endl;
	}
}

