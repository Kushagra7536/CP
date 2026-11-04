#include<bits/stdc++.h>
using namespace std;

int main(){
	string s; cin>>s;
	int i=0;
	string ans="";
	while(i<s.length()){
		if(s[i]=='.'){ ans=ans+'0'; i++;}
		else if(s[i]=='-' && s[i+1]=='.') {ans=ans+'1'; i+=2;}
		else if(s[i]=='-' && s[i+1]=='-') { ans=ans+'2'; i+=2;}
	}

	cout<<ans<<endl;
}