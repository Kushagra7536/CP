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
	long long n,m;
	cin>>n>>m;
	long long next_prime;

	if(is_prime(m)){
		if(n<2) next_prime=2;
		else if (n%2==0) next_prime=n+1;
		else next_prime=n+2;

		if(next_prime>m){ cout<<"NO"<<endl; return 0;}
		while(!is_prime(next_prime)) next_prime+=2;

		if(next_prime==m) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	else cout<<"NO"<<endl;
}