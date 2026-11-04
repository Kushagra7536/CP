#include <bits/stdc++.h>
using namespace std;
# define ll long long 


int main(){
	ll t; cin>>t;
	while(t--){
		ll n; cin>>n;
		vector<ll> v(n);

		ll cnt1=0, cnt0=0;

		for(ll i=0; i<n; i++){
			cin>>v[i];
			if(v[i]==1) cnt1++;
			else if(v[i]==0) cnt0++;
		}

		if(cnt1==0) cout<<"0"<<endl;
		else{
			if(cnt0==0) cout<<cnt1<<endl;
			else{
				ll ans = cnt1*pow(2,cnt0);
				cout<<ans<<endl;
			}
		}
	}
}