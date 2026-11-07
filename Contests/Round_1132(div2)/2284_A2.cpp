#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        sort(arr.begin(), arr.end(), greater<int>());

        long long sumX = 0, sumY = 0;
        for (int j = 0; j < n; j++) {
            long long val = 1LL << arr[j];
            if (sumX <= sumY) sumX += val;
            else sumY += val;
        }

        cout << sumX * sumY << endl;
    }
   
}