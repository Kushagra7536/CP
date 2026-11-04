#include<bits/stdc++.h>
using namespace std;

vector<char> check(string s, int n){
	vector<char> c;
	for(int i=0; i<n; i++){
		bool is_duplicate = false;
		for (int j=0; j<i; j++){
			if(s[j]==s[i]){
				is_duplicate=true;
				break;
			}
		}
		if(is_duplicate==false) c.push_back(s[i]);
	}
	return c;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		string s; cin>>s;
		vector<char> c = check(s,n);
		vector<int> Hz;
		for(auto x : c) Hz.push_back(count(s.begin(),s.end(),x));

		int cnt=0;
		for (auto x:Hz) if(x%2!=0) cnt++;

		if(cnt>k+1)cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
}