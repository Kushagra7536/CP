#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if (x<2) return false;
    for (int d=2; d*d <= x; d++) {
        if (x%d == 0) return false;
    }
    return true;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        for (int i=0; i<n; i++) {
            int v;
            cin>>v;
            while (!isPrime(v)) v++;
            cout<< v << " ";
        }
        cout << endl;
    }
}