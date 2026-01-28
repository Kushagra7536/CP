#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> v(n);
		for(int i=0; i<n; i++) {cin>>v[i];}

		int streak=0,temp=0;
		for(int i=0; i<n; i++){
			if(v[i]==0){
				temp++;
			}
			else temp=0; 

			if(temp>streak) streak=temp;

		}

		cout<<streak<<endl;
	}
}