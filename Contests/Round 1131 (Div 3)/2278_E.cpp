#include <bits/stdc++.h>
using namespace std;

int main() {

    long long t;
    cin >> t;
    while (t--) {
        long long n; cin >> n;
        vector<long long> bacche(n);
        for (long long i = 0; i < n; i++) {
            long long v;
            cin >> v;
            if ((i + 1) % 2 == 1) bacche[i] = -v;
            else bacche[i] = v;
        }
        sort(bacche.begin(), bacche.end());

        long long negative_bacche= (n + 1) / 2; 
        long long neg_part = 0, pos_part = 0;
        for (long long i = 0; i < negative_bacche; i++) neg_part += bacche[i];
        for (long long i = negative_bacche; i < n; i++) pos_part += bacche[i];

        cout<<(pos_part - neg_part)<<endl;
    }
}