#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,m; cin>>n>>m;
	if(m%n!=0) cout<<"-1 "<<endl;
	else{
		int cnt=0;
		long long t=m/n;
		while(t%3==0){
			t/=3;
			cnt++;
		}
		while(t%2==0){
			t/=2;
			cnt++;
		}
		
		if(t==1) cout<<cnt<<endl;
		else cout<<"-1"<<endl;	
		
	}
}