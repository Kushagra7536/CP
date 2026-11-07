#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        int c = 0;
        for (int i = 0; i < n; i++) if (a[i] == a[n - 1]) c++;

        if (k < c) {
            cout << "NO"<< endl;;
            continue;
        }

        cout << "YES" << endl;;
        // k sabse bade in asc order
        for (int i = n - k; i < n; i++) cout << a[i] << " ";
        // remaining in desc order
        for (int i = n - k - 1; i >= 0; i--) cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}