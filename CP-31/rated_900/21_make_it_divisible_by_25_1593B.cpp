#include<bits/stdc++.h>
using namespace std;
// 00 50 25 75 

int check(string n, string v){
	int opr=0;
	int i=v.length()-1;
	for(int j=n.length()-1; j>=0; j--){
		if(n[j]==v[i]){
			i--;
			if(i<0) break;
		}
		else opr++;
	}
	if(i>=0) opr=INT_MAX;
	return opr;
}

int main(){
	long long t; cin>>t;
	while(t--){
		string n; cin>>n;

		int ans=INT_MAX;
		vector<string> possible_value={"00","25","50","75"};
		for(int i=0; i<4; i++){
			ans=min(ans,check(n,possible_value[i]));
		}

		cout<<ans<<endl;
	}	
}