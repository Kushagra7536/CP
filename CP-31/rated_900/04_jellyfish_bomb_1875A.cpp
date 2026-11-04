#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		long long a,b,n;
		cin>>a>>b>>n;
		vector<long long> v(n);
		for(long long i=0; i<n; i++) cin>>v[i];
		sort(v.begin(),v.end());

		long long i=0,time=0;
		while(i<=n){
			if(i==n)time+=b;
			else{
				time+=b-1;
			}
			b=min(1+v[i],a);
			i++;
		}


		cout<<time<<endl;
	}
}
