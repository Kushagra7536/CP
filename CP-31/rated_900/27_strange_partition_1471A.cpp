#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
	ll t; cin>>t;
	while(t--){
		double n,x; cin>>n>>x;
		vector<double> v(n);
		for(int i=0; i<n; i++) cin>>v[i];

		ll max_beauty = 0;

		double csum=0;
		for(auto i: v){
			csum+=i;
			max_beauty += ceil(i/x);
		}

		ll min_beauty = ceil(csum/x);

		cout<<min_beauty<<" "<<max_beauty<<endl;
	}
}