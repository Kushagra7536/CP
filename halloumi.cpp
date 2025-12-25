#include<bits/stdc++.h>
using namespace std;
bool sorted(vector<int> a, int n){
    for(int i=0;i<n-1;i++){
        if (a[i]>a[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool flag = sorted(a,n);
        if (k>1 || flag==true){
            cout<< "YES" <<endl;
        }
        else{
            cout<< "NO" <<endl;
        }
    }
    return 0;
}