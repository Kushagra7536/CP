#include<bits/stdc++.h>
using namespace std;
// 00 50 25 75 

int main(){
	long long t; cin>>t;
	while(t--){
		long long n; cin>>n;
		string v;
		while(n>0){
			string digit=to_string(n%10);
			v=digit+v;
			n/=10;
		}
		// cout<<v<<endl;

		long long opr=0,i=v.length()-1,j=i-1;
		char curr=v[i];
		while(j>=0){
			if(curr=='5'){
				if(v[j]=='2' || v[j]=='7') break;
				else if(v[j]=='5' || v[j]=='0') curr=v[j];
				j--; opr++;
			}
			else if(curr=='0'){
				if(v[j]=='0' || v[j]=='5') break;
				else if(v[j]=='2' || v[j]=='7') curr=v[j];
				j--; opr++;
			}
			else{
				curr=v[j];
				j--; opr++;
			} 
		}
		
		cout<<opr<<endl;

	
	}	
}