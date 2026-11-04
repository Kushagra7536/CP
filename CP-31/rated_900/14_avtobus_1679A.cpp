#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t; cin>>t;
	while(t--){
		long long n; cin>>n;
		if(n%2==0 && n>=4){
			long long min = (n+5)/6;
			long long max=(n/4);
			cout<<min<<" "<<max<<endl;
		}
		else cout<<"-1"<<endl;
		
	}
}