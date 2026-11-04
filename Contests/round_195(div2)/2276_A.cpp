#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int a,b; 
		cin>>a>>b;

		if(a<=b) cout<<"-1"<<endl;
		else{
			int i=0,temp=b;
			while(i<temp){
				if(a>=2*(b-i)+i) break;
				i++;
			}
			cout<<b-i<<endl;
		}
	}
}