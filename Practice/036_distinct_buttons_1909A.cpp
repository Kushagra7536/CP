#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<pair<int,int>> v;
		for(int i=0; i<n; i++){
			int x,y; cin>>x>>y;
			v.push_back({x,y});
		}

		int temp=0;
		while(temp<n){
			if(v[temp].first!=0){
				break;
			}
			temp++;
		}

		if(temp==n-1) cout<<"YES"<<endl;
		else{
			bool x=true;
			if(v[temp].first>0){
				for(int i=1; i<n; i++){
					if(v[i].first<0){
						x=false; break;
					}
				}
			else{
				for(int i=1; i<n; i++){
					if(v[i].first>0){
						x=false; break;
					}
				}
			}

			if(x) cout<<"YES"<<endl;
			else{

				int temp=0;
				while(temp<n){
					if(v[temp].second!=0){
						break;
					}
					temp++;
				}
				bool y=true;
				if(v[0].second>0){
					for(int i=1; i<n; i++){
						if(v[i].second<0){
							y=false; break;
						}
					}
				else{
					for(int i=1; i<n; i++){
						if(v[i].second>0){
							y=false; break;
						}
					}
				}
				if(y) cout<<"YES"<<endl;
			}
		}
	}

}