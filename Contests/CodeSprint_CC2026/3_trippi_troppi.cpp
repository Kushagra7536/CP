
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');  // discard rest of the line after t

    while(t--){
        string s;
        getline(cin, s);          

        istringstream iss(s);
        string word, ans;
        while(iss >> word) ans += word[0];

        cout << ans << endl;
    }
}