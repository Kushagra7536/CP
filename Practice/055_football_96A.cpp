#include<bits/stdc++.h>
using namespace std;

int main(){
	string s; cin>>s;
	int seq0=0 , seq1=0; 
	int max_seq0=0 , max_seq1=0;
	for(auto x:s){
		
		if(x=='0'){
			seq0++; seq1=0;
		}
		if(max_seq0<seq0) max_seq0=seq0;
		


		if(x=='1'){
			seq1++; seq0=0;
		}
		if(max_seq1<seq1) max_seq1=seq1;


	}

	if(max_seq0>=7 || max_seq1>=7) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	// cout<<max_seq0<<" "<<max_seq1<<endl;
}