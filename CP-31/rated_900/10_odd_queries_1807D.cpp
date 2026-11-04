#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t; cin>>t;
	while(t--){
		long long n,q;
		cin>>n>>q;
		vector<long long> v(n);
		long long sum=0;
		for(long long i=0; i<n; i++){
		 	cin>>v[i];
		 	sum+=v[i];
		}

		vector<long long> prefix_sum(n+1, 0);
		for (int i = 0; i<n; i++)
			prefix_sum[i+1] = prefix_sum[i] + v[i];

		while(q--){
			long long l,r,k;
			cin>>l>>r>>k;

			long long seg_sum=prefix_sum[r]-prefix_sum[l-1];
			long long new_sum=(sum-seg_sum)+((r-l+1)*k);

			if(new_sum%2==1) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;

		}


	}
}