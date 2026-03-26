#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n,d; cin>>n>>d;
		string s ; cin>>s;

			string ans="";
			long long i=0;
			while(i<s.length()){
				if((s[i]-'0') < d) break;
				ans = ans + s[i] ;
				i++;
			}

			ans=ans + to_string(d);

			while(i<s.length()){
				ans = ans + s[i];
				i++;
			}
			cout<<ans<<endl;	
	}
}