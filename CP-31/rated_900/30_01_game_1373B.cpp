#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		int zcount=0,ocount=0;
		for (auto x:s){
			if(x=='1') ocount++;
			else zcount++;
		}

		int ans = min(zcount,ocount);
		if(ans%2==0) cout<<"NET"<<endl;
		else cout<<"DA"<<endl;
	}
}
