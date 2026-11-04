#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        bool flag = false;
        long long temp,sum = 0;
        long long global_max = 0;
        for(int i = 0; i < n; i++){
            cin >> temp; 
            sum+=temp;
            global_max=max({temp,global_max});
            if(i>0 && i<n-1){
                if(temp>1) flag=true;
            }
        }

        if(global_max < 2) cout<<"-1"<<endl;
        else if(flag) cout<<sum-1<<endl;
        else cout<<sum-(n-1)<<endl;

    }
}