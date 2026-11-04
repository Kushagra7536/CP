#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        int x,y,z; cin>>x>>y>>z;

        int sabse_jyada = max({x,y,z});
        if(sabse_jyada == x) {string ans(x+y+z,'P'); cout<<ans<<endl;}
        else if(sabse_jyada == y) {string ans(x+y+z,'R'); cout<<ans<<endl;}
        else {string ans(x+y+z,'S'); cout<<ans<<endl;}
    }
    
}