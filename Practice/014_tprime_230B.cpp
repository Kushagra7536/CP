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
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        double root = sqrt(n);
        if(root==floor(root) && is_prime(root)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
