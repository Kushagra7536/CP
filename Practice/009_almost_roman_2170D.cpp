#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;
		vector<char> a(n);
		for(int i=0; i<n; i++) cin>>a[i];
		for (int i=0; i<q; i++){
			int cx,cv,ci;
			cin>>cx>>cv>>ci;
			vector<char>temp = a;
			int j=0,k=1;
			while(k<n){
				if (a[j]=='?' && a[k]=='?'){
					if(cx>0 && cv>0){
						a[j]='I'; a[k]='V';
						
					}
				}
			}
		}

	}
}