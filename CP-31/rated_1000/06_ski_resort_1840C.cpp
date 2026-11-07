#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);

	ll t; cin>>t; 
	while(t--){
		ll total_din, isse_kam_nahi_jaara, iske_aage_jal_jayega;
		cin>>total_din>>isse_kam_nahi_jaara>>iske_aage_jal_jayega;
		vector<ll> taapmaan_ki_stithi(total_din,0);
		ll aaj_ka_taapmaan;

		for(int i=0; i<total_din; i++){
			cin>>aaj_ka_taapmaan;
			if(aaj_ka_taapmaan <= iske_aage_jal_jayega) taapmaan_ki_stithi[i]=1;
		}

		ll consecutive_din=0;
		ll kab_kab_jaa_sakta=0;
		for(int i=0; i<total_din; i++){
			if(taapmaan_ki_stithi[i] == 1) consecutive_din++;
			else{
				if(consecutive_din >= isse_kam_nahi_jaara){
					ll dih = consecutive_din - isse_kam_nahi_jaara + 1;
					kab_kab_jaa_sakta += (dih * (dih+1)) / 2 ;
				}
				consecutive_din = 0;
			}
		}

		if(consecutive_din >= isse_kam_nahi_jaara){
			ll dih = consecutive_din - isse_kam_nahi_jaara + 1;
			kab_kab_jaa_sakta += (dih * (dih+1)) / 2 ;
		}

		cout<<kab_kab_jaa_sakta<<endl;
	}
}