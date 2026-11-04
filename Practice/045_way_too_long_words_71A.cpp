#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t; cin>>t;
	while(t--){
		string s; cin>>s;
		long long n = s.length();

		if(n>10){
			cout<<s[0]<<n-2<<s[n-1]<<endl;
		}
		else cout<<s<<endl;
	}
}