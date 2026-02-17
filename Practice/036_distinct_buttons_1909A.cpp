#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> isit={0,0,0,0};

		for(int i=0; i<n; i++){
			int x,y; cin>>x>>y;
			if(x>0) isit[0]=1;
			if(x<0) isit[1]=1;
			if(y>0) isit[2]=1;
			if(y<0) isit[3]=1;
		}

		int sum=0;
		for(auto x:isit){
			sum+=x;
		}

		if(sum>3) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;

	}
}