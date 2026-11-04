
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        // Print the min, median, and max for the i-th block
        cout << i << " " << (3*n)-(2*i)+1 << " " << (3*n)-(2*i)+2<< " ";
    }
    cout << "\n";
}

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}