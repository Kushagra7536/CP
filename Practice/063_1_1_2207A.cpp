#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		string v; cin>>v;
		string tmax=v;

		for(int i=1; i<n-1; i++){
			if(v[i-1]=='1' && v[i+1]=='1') tmax[i]='1';
		}
		int mx = count(tmax.begin(),tmax.end(),'1');

		string tmin=tmax;
		for(int i=1; i<n-1; i++){
			if(v[i-1]=='1' && v[i+1]=='1') tmin[i]='0';
		}
		int mn = count(tmax.begin(),tmax.end(),'0');

		cout<<mx<<" "<<mn<<endl;
	}
}