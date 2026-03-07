#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t; cin>>t;
	while(t--){
		long long a,b; cin>>a>>b;
		if(a==b) cout<<"0 0"<<endl;
		else{
			long long exc = abs(a-b);
			long long steps = min(b%exc,exc-(b%exc));
			cout<<exc<<" "<<steps<<endl;
		}
	}
}
