#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int cnt=0;
        for(int i=1; i<s.length()-1; i++){
            if(s[i-1] == s[i+1] && s[i]==s[i-1]) cnt++;
        }

        cout<<cnt<<endl;
    }

}