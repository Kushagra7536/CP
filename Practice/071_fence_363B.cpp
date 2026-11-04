#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);

	long long n; cin>>n;
	long long k; cin>>k;
	vector<long long> v(n);
	vector<long long> sums(n-k+1,0);
	long long temp=0;

	long long ans = numeric_limits<long long>::min();
	long long ans_index=-1;

	for(int i=0; i<n; i++){
		if(i<k){
			cin>>v[i];
			sums[0]+=v[i];
			ans=max(ans,sums[0]);
		}else{
			cin>>v[i];
			sums[i-k+1]=sums[i-k]+v[i]-v[i-k];

			if(sums[i-k+1]<ans){
				ans=sums[i-k+1];
				ans_index=i-k+1;
			}

		}
	}

	if(ans_index==-1) cout<<1<<endl;
	else{
		cout<<ans_index+1<<endl;
	}

	// long long ans = numeric_limits<long long>::max();
	// long long ans_index=-1;
	// for(int i=0; i<n-k+1; i++){
	// 	if(sums[i]<ans){
	// 		ans=sums[i];
	// 		ans_index=i;
	// 	}
	// }

	// cout<<ans_index+1<<endl;
}