#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int, vector<int>, greater<int>> pq;
    string s;
    cin >> s;
    
    
    for(int i = 0; i < s.length(); i++){
        if(s[i] != '+'){
            pq.push(s[i] - '0'); 
        }
    }
    
    while(!pq.empty()){
        cout << pq.top();
        pq.pop();
        if(!pq.empty()){
            cout << "+";
        }
    }
    cout << endl;
    
    return 0;
}