#include<bits/stdc++.h>
using namespace std;

int main(){
	string s; cin>>s;
	bool possible = false;
	for(int i=0; i<s.length(); i++){
		if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
			possible=true;
			break;
		}
	}

	if(possible) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}