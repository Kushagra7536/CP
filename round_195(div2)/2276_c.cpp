// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while(t--){
//         int n, k;
//         cin >> n >> k;
//         vector<long long> a(n), pre(n);
//         long long sum = 0;
//         for(int i=0; i<n; i++){
//             cin >> a[i];
//             sum += a[i];
//             pre[i] = sum;
//         }

//         long long count = 0;
//         for(int size = k+1; size <= n; size++){
//             for(int l = 0; l + size - 1 < n; l++){
//                 int r = l + size - 1;
//                 long long tsum = pre[r] - (l > 0 ? pre[l-1] : 0);
//                 if(tsum % k == 0) count++;
//             }
//         }

//         cout << count << "\n";
//     }
// }


#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<long long> pre(n+1, 0);
        for(int i=1;i<=n;i++){
            long long x;
            cin >> x;
            pre[i] = pre[i-1] + x;
        }

        vector<long long> cnt(k, 0);
        long long ans = 0;
        int j_added = -1;

        for(int r=1; r<=n; r++){
            int target_j = r-k-1;
            while(j_added < target_j){
                j_added++;
                cnt[pre[j_added] % k]++;
            }
            ans += cnt[pre[r] % k];
        }

        cout << ans << "\n";
    }
}