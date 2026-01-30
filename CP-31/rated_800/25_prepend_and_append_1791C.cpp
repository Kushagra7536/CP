#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t; 
	while(t--){
		int n; cin>>n;
		string s; cin>>s;
	
		int i=0,j=n-1,cnt=0;
		while(i<j){
			if(s[i]==s[j]) {break;}
			i++; j--; cnt++;
		}

		cout<<n-(2*cnt)<<endl;
	}
}