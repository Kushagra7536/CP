#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll opr=0;
		if(n==1) cout<<"0"<<endl;
		else if(n%3!=0) cout<<"-1"<<endl;
		else{
			while(n!=1){
				if(n%3!=0){opr=-1; break;}
				if(n%6==0){n/=6; opr++;}
				else{n*=2; opr++;}
			}
			cout<<opr<<endl;
		}

	}
}