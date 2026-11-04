#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> v(n);
		for(int i=0; i<n; i++) cin>>v[i];
		vector<int> v1(v);

		sort(v1.begin(),v1.end(),greater<int>());
		
		if(v1==v){
			for(auto x:v1) cout<<x<<" ";
			cout<<endl;
		}
		else{
			int i=0,j=1;
			while(i<n && j<n){
				if(v[i]==v1[i]) i++;
				if(v[j]==v1[i]) break;
				j++;
			}

			// reversing the segment
			while(i<j){
				swap(v[i],v[j]);
				i++; j--;
			}

			for(auto x:v) cout<<x<<" ";
			cout<<endl;
		}

	}
}
