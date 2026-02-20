#include <bits/stdc++.h>
using namespace std;

int main(){
	long long  t; cin>>t;
	while(t--){
		long long n,k; cin>>n>>k;
		vector<long long> v(n);
		for(long long i=0; i<n; i++) cin>>v[i];
		sort(v.begin(),v.end());

		long long i=0,cnt=0,max=0;
		while(i<n-1){
			if((v[i+1]-v[i])>k) cnt=0;
			else cnt++;
			if(cnt>max) max=cnt;
			i++;
		}

		cout<<n-max-1<<endl;
	}
}
