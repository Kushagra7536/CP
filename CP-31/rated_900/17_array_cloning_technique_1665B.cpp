#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t; cin>>t;
    while(t--) {
    long long n; cin>>n;
    vector<long long> v(n);
    for(long long i=0; i<n; i++) cin>>v[i];

    map<long long,long long> freq;
    for(auto x:v) freq[x]++;

    long long max_freq=0;
    for(auto x:freq){
        if(x.second>max_freq) max_freq=x.second;
    }

    if(max_freq==n) cout<<"0"<<endl;
    else{
        long long avl=max_freq;
        long long pos = n-avl;
        long long opr=0;
        
        while(pos>0){    
            // cout<<"before: "<<avl<<" "<<pos<<" "<<opr<<" ";
            opr++;
            
            opr+=min(avl,pos);
            pos-=min(avl,pos);
            avl=avl*2;
          
            // cout<<"after: "<<avl<<" "<<pos<<" "<<opr<<endl;
        }
        //cout<<endl;
        cout<<opr<<endl; 
    }
    
//    for(auto x:maps) cout<<x.second<<" "<<x.first<<endl;
//    cout<<endl<<endl;
    }
 }

    