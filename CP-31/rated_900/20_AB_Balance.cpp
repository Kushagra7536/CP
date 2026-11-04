#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		int ab_cnt=0,ba_cnt=0;

		if(s[0]==s[s.length()-1]) cout<<s<<endl;
		else{
			s[0]=s[s.length()-1];
			cout<<s<<endl;
		}


	}
}