#include <bits/stdc++.h>
using namespace std;
#define ll long long


ll mid(ll a, ll b) {
    for (ll c = a + 1; c < b; c++)
        if (__gcd(a, c) == 1 && __gcd(c, b) == 1) return c;
    return -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;

        if (a == b) {
            cout << 0 << endl;
            continue;
        }
        if (__gcd(a, b) == 1) {
            cout << 1 << endl << b - a << endl;
            continue;
        }

        ll c = mid(a, b);
        if (c != -1) {
            cout << 2 << endl << c - a << " " << b - c << endl;
            continue;
        }
        
        for (c = a + 1; c < b; c++) {
            if (__gcd(a, c) != 1) continue;
            ll d = mid(c, b);
            if (d != -1) {
                cout << 3 << endl << c - a << " " << d - c << " " << b - d << endl;
                break;
            }
        }
    }
    
}