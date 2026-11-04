#include<bits/stdc++.h>
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>>t;
    while(t--) {
        int n,k; cin>>n>>k;
 
        vector <int> freq(n+1,0);
        for (int i=0; i<n; i++) {
            int x; cin>>x;
            freq[x]++;
        }
        
        int ans=n,kitne_hai=0;
 
        for(int i=0; i<n; i++) {
            if(freq[i]==0){
            	ans=i; break;
            }

            kitne_hai += freq[i];

            if(kitne_hai<k){
            	ans=i;
            	break;
            }
            kitne_hai -= k;
        }
 
        cout<<ans<<endl;
    }
}