#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n; 
		string s; cin>>s;

		if(s[0]=='1' || s[n-1]=='1' || s.find("11") != string::npos) 
			cout<<"Yes"<<endl;
		else cout<<"NO"<<endl;
	}
}