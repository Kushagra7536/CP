#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		double a,b,c;
		cin>>a>>b>>c;

		if(fmod(((c+a)/2),b)==0) cout<<"YES"<<" 1"<<endl;
		else if(fmod(b+(b-a),c)==0) cout<<"YES"<<" 2"<<endl;
		else if(fmod(b-(c-b),a)==0) cout<<"YES"<<" 3"<<endl;
		else cout<<"NO"<<endl;
	}
}



