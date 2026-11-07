#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


        int t; cin>>t;
        while(t--){
        int n;+
        cin >> n;
        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        vector<long long> distinctVals(a.begin(), a.end());
        sort(distinctVals.begin(), distinctVals.end());
        distinctVals.erase(unique(distinctVals.begin(), distinctVals.end()), distinctVals.end());

        long long best = 0;
        for (long long g : distinctVals) {
            long long cnt = 0;
            for (long long x : a)
                if (x % g == 0) cnt++;
            best = max(best, cnt);
        }

        cout << (n - best) << endl;
 }
}