#include <bits/stdc++.h>
using namespace std;



int main() {

    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(),a.end());

        long long middle = a[floor(n/2)];
        long long operations = a[n-1]-a[0];
        long long kam_se_kam = 0;

        for(int i=0; i<n; i++){
            kam_se_kam+=abs(a[i]-middle);
        }

        cout<<kam_se_kam<<" "<<operations<<endl;
    }
   
}