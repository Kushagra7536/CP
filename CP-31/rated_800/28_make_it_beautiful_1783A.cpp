#include<bits/stdc++.h>
using namespace std;

// to count number of distincts in a vector
int check(vector<int> s, int n){
	int distinct_count=0;
	for(int i=0; i<n; i++){
		bool is_duplicate = false;
		for (int j=0; j<i; j++){
			if(s[j]==s[i]){
				is_duplicate=true;
				break;
			}
		}
		if(is_duplicate==false) distinct_count++;
	}
	return distinct_count;
}


int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> v(n);
		for(int i=0; i<n; i++){cin>>v[i];}

		if(check(v,n)==1) cout<<"NO"<<endl;
		else{
			sort(v.begin(),v.end(),greater<int>());
			if(v[0]==v[1]){
				int temp=v[0],i=1;
				while(i<n){
					if(v[i]!=temp){temp=v[i]; break;}
					i++;
				}
				swap(v[1],v[i]);
			}
			cout<<"YES"<<endl;
			for(auto x : v) cout<<x<<" ";
			cout<<endl;
		}
	}
}