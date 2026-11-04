#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin >> t;
    const int STEPS = 1000; 
    
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        
        unordered_map<long long,int> cnt;
        cnt.reserve(n*2);
        
        for(int i = 0; i < n; i++){
            long long x = a[i];
            for(int s = 0; s < STEPS; s++){
                long long total = 0;
                while(x > 0){
                    long long d = x % 10;
                    x /= 10;
                    total += d*d;
                }
                x = total;
            }
            cnt[x]++;
        }
        
        long long ans = 0;
        for(auto &p : cnt){
            long long c = p.second;
            ans += c*(c-1)/2;
        }
        
        cout << ans << "\n";
    }
}