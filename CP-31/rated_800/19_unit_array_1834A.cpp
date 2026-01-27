#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> v(n);
		for(int i=0; i<n; i++) {cin>>v[i];}
		sort(v.begin(),v.end());

		int sum=0,operation=0;
		for(int i=0; i<n; i++) {sum+=v[i];}

		if(sum<0){
			while(sum<0){
				v[operation]=1;
				operation++;
				sum+=2;			
			}		
		}

		int cnt = count(v.begin(),v.end(),-1);
		if(cnt%2==0) cout<<operation<<endl;
		else cout<<operation+1<<endl;
	}


}