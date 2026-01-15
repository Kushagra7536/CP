#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int l,a,b;
		cin>>l>>a>>b;
		vector<int> v;
		v.emplace_back(((a+(0*b))%l)); // v[0]=a;
		v.emplace_back(((a+(1*b))%l));
		int n=2;
		while(v[n-1]!=v[0]){
			v.emplace_back(((a+(n*b))%l));
			n++;
		}

		// for(auto x : v) cout<<x<<" ";
		// cout<<endl;
		auto max = max_element(v.begin(),v.end());
		cout<<*max<<endl;
	}
}