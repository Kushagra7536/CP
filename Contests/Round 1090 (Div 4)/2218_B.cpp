#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		vector<int> v(7);
		for(int i=0; i<7; i++) cin>>v[i];

		sort(v.begin(),v.end());

		int sum = 0;
		for(int i=0; i<7; i++){
				if(i==6) sum+=v[i];
				else sum+=(-1*v[i]);
		}

		cout<<sum<<endl;
		
	}
}