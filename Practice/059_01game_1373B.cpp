#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		long long cnt=0;
		for(int i=0; i<s.length()-1; i++){
			if(s[i]!=s[i+1]) cnt++;
		}
		cout<<cnt<<" ";
		if((cnt/2)%2==1) cout<<"DA"<<endl;
		else cout<<"NET"<<endl;

	}
}