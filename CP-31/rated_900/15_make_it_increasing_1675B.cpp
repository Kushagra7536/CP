#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n;  cin>>n;
		vector<long long> v(n);
		for(int i=0; i<n; i++) cin>>v[i];

		long long ans = 0;
		for(int i=n-2; i>=0; i--){
			while(v[i]>=v[i+1]){
				v[i]/=2;
				ans++;
				if(v[i]==0) break;
			}
			if(v[i]==0 && v[i+1]==0) {ans=-1; break;}
		}
		cout<<ans<<endl;
	}
}