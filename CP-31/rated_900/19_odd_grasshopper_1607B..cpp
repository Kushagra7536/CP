#include<bits/stdc++.h>
using namespace std; 

int main(){
	long long t; cin>>t;
	while(t--){
		long long x,n; 
		cin>>x>>n;

		long long temp=n%4;
		long long pos=x;
		for(long long i=n-temp+1; i<=n; i++){
			if(pos%2==0) pos-=i;
			else pos+=i;
		}
		cout<<pos<<endl;
	}
}