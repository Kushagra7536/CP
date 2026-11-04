#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s; 

        vector<bool> printed(n + 1, false);
        vector<int> stk;
        stk.reserve(n);

        for (int i = 1; i <= n; i++) {
            char c = s[i - 1]; 
            if (c == '1') {
                stk.push_back(i);
            } else if (c == '2') {
                if (!stk.empty()) {
                    int j = stk.back();
                    stk.pop_back();
                    printed[j] = true;
                } else {
                    printed[i] = true;
                }
            } else { // c == '3'
                printed[i] = true;
            }
        }

        vector<int> ans;
        for (int i = 1; i <= n; i++)
            if (!printed[i]) ans.push_back(i);

        cout << ans.size() << "\n";
        for (int i = 0; i < (int)ans.size(); i++) {
            cout << ans[i] << (i + 1 == (int)ans.size() ? '\n' : ' ');
        }
        if (ans.empty()) cout << "\n";
    }

}