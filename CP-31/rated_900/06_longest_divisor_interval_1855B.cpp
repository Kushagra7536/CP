#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;

        int i=1;
        while(true){
            if(n%i!=0) break;
            i++;
        }

        cout<<i-1<<endl;
     
    }
}


// the longest subinterval can be found at the very beginning 
// once the divisors start skipping they will continue to skip 