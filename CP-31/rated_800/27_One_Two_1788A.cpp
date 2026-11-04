#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> v(n);
		for(int i=0; i<n; i++) {cin>>v[i];}
		int cnt = count(v.begin(),v.end(),2);
	

		if(cnt==0) cout<<"1"<<endl;
		else if(cnt%2==0){
			int temp=0;
			int i=0;
			while(i<n){
				if(temp==(cnt/2)) break;
				if(v[i]==2) {temp++;}
				i++;
			}
			cout<<i<<endl;
		}
		else cout<<"-1"<<endl;
	}
}