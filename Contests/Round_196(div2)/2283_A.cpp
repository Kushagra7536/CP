




#include <bits/stdc++.h>
using namespace std;

int solve(int l, int r) {
    if (l >= 1 || r <= -1) {
        return r - l;
    }
    int s = l + r;
    return (s == 0) ? 0 : abs(s) - 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        cout << solve(l, r) << "\n";
    }
}