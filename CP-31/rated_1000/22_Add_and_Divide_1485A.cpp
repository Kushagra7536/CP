#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t; cin>>t;
	while(t--){
		long long a,b;
		cin>>a>>b;

		long long opr=0;
		while(a>0){
			a/=b;
			opr++;
			if(a==0) break;
			b++; opr++;
			// cout<<a<<" "<<b<<" "<<opr<<endl;
		}

		cout<<opr<<endl;
	}
}