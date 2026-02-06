#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--){
        long long n; cin >> n;
        vector<long long> a(n); 
        for (int i = 0; i < n; i++) cin >> a[i];
      
        int flag = 0; // Flag to check if a beautiful array can be formed
        for (int i = 0; i < n; i++){
            for (int j = i + 1; j < n; j++){ 
            // Loop to check pairs of elements
            // Check if the gcd of any pair of elements is less than or equal to 2
                if (__gcd(a[i], a[j]) <= 2) flag = 1;  
            }
        }

        // If no such pair is found, flag remains 0
        // If flag is 0, print "NO", else print "YES"
        if (flag == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}