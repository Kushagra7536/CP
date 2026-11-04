#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n,m; cin>>n>>m;
		string p,q; cin>>p>>q;
		vector<int> map1(26),map2(26);

		for(int i=0; i<n; i++) map1[p[i]-'a']++;
		for(int i=0; i<m; i++) map2[q[i]-'a']++;

		map2['s'-'a']++;
		map2['i'-'a']++;
		map2['x'-'a']++;

		bool done_bro = true;
		for(int i=0; i<26; i++){
			if(map1[i]!=map2[i]){
				done_bro = false;
				break;
			}
		}

		if(done_bro) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;

		
	}

	
}