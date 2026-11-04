#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        long long g = LLONG_MAX;     
        long long sumAlt = 0;         
        long long minAlt = LLONG_MAX; 
        
        for (int i = 0; i < n; i++) {
            int m;
            cin >> m;
            
            long long mn1 = LLONG_MAX, mn2 = LLONG_MAX; 
            for (int j = 0; j < m; j++) {
                long long x;
                cin >> x;
                if (x < mn1) {
                    mn2 = mn1;
                    mn1 = x;
                } else if (x < mn2) {
                    mn2 = x;
                }
            }
            
            g = min(g, mn1);
            sumAlt += mn2;
            minAlt = min(minAlt, mn2);
        }
        
        long long ans = g + sumAlt - minAlt;
        cout << ans << endl;
    }
    
}