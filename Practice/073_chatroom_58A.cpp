#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    string target = "hello";
    int i = 0; 
    
    for (char ch : s) {
        if (i < (int)target.size() && ch == target[i]) {
            i++;
        }
    }
    
    cout << (i == (int)target.size() ? "YES" : "NO") << endl;
    
    
}