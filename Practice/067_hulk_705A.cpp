#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string result = "I ";
    for (int i = 0; i < n; i++) {
        if (i > 0) {
            result += " that I ";
        }
        result += (i % 2 == 0) ? "hate" : "love";
    }
    result += " it";

    cout << result << endl;
}