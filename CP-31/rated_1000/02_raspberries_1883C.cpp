#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t; cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		vector<long long> v(n);
		for(int i=0; i<n; i++) cin>>v[i];

		long long even_cnt=0;
		vector<long long> rem;
		for(auto i:v){
			if(i%2==0) even_cnt++;
			if(i%k==0) rem.push_back(0);
			rem.push_back(k-(i%k));
		}
		if(k==4){
			long long temp;
			if(even_cnt>=2) temp=0;
			else temp=2-even_cnt;

			cout<<min(*min_element(rem.begin(),rem.end()),temp)<<endl;
		}
		else cout<<*min_element(rem.begin(),rem.end())<<endl;
	}
}



