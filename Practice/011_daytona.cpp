#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		bool found=false;
		vector<int> a(n);
		for(int i=0; i<n; i++) cin>>a[i];
		for(auto x : a){
			if(x==k){
				found=true;
				break;
			}
		}
		if(found==true) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
}