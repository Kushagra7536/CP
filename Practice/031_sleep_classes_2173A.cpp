#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		string s; cin>>s;

		int skip=0,cnt=0;
		for(int i=0; i<n; i++){
			if(s[i]=='1') {skip=k;}
			else if(skip==0 && s[i]=='0') {cnt++;}
			else if(skip>0) {skip--;}
		}

		cout<<cnt<<endl;
	}
}