#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        long long sumAbs = 0;
        int negCount = 0;
        int minAbs = INT_MAX;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int a;
                cin >> a;
                sumAbs += abs(a);
                if (a < 0) negCount++;
                minAbs = min(minAbs, abs(a));
            }
        }

        long long ans = sumAbs;
        if (negCount % 2 == 1) {
            ans -= 2LL * minAbs;
        }
        cout << ans << '\n';
    }
}