#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	vector<pair<int,int>> v;
	for(int i=0; i<n; i++){
		int temp1; cin>>temp1;
		v.push_back({temp1,i+1});
	}
	sort(v.begin(),v.end());

	for(int i=0; i<n; i++){
		cout<<v[i].second<<" ";
	}
}