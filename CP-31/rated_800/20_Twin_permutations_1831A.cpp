#include<bits/stdc++.h>
using namespace std;

bool check(vector<int> v,vector<int> temp,int n){
	for(int i=0; i<n-1; i++){
		if(v[i]+temp[i] > v[i+1]+temp[i+1]) return false;
	}
	return true;
}

void rearrange(vector<int> v,vector<int> &temp, int n){
	for(int i=n-1; i>0; i--){
		if(v[i-1]+temp[i-1] > v[i]+temp[i]) 
			swap(temp[i],temp[i-1]);
		}
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> v(n);
		for(int i=0; i<n; i++) {cin>>v[i];}
		vector<int> temp = v;

		while(true){
			if(check(v,temp,n)) break;
			rearrange(v,temp,n);
		}

		for(auto x : temp) cout<<x<<" ";
		cout<<endl;
	}
}