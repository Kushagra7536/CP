#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n+1);
        for(int i = 1; i <= n; i++) cin >> a[i];

        int m = n - 4; // number of valid triad starts
        vector<int> v(m+1);
        for(int x = 1; x <= m; x++){
            v[x] = a[x] + a[x+2] - a[x+4];
        }

        // total pairs with equal value, ignoring overlap
        vector<int> sortedV(v.begin()+1, v.end());
        sort(sortedV.begin(), sortedV.end());

        long long total = 0;
        int i = 0;
        while(i < m){
            int j = i;
            while(j < m && sortedV[j] == sortedV[i]) j++;
            long long c = j - i;
            total += c*(c-1)/2;
            i = j;
        }

        // bad pairs
        long long bad = 0;
        for(int x = 1; x <= m; x++){
            if(x+2 <= m && v[x] == v[x+2]) bad++;
            if(x+4 <= m && v[x] == v[x+4]) bad++;
        }

        cout << (total - bad) << endl;
    }
}