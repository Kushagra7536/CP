#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> a(n),b,c;
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		sort(a.begin(),a.end());

		c.push_back(a[n-1]);
		for(int i=n-2; i>=0; i--){
			if(a[i]==c[0]){
				c.push_back(a[i]);
			}
		}

		int i=0;
		while(a[i]!=c[c.size()-1]){
			b.push_back(a[i]);
			i++;
		}

		if(b.size()==0 || c.size()==0) cout<<"-1"<<endl;
		else{
			cout<<b.size()<<" "<<c.size()<<endl;

			for(int j=0; j<b.size(); j++){
				cout<<b[j]<<" ";
			}
			cout<<endl;

			for(int j=0; j<c.size(); j++){
				cout<<c[j]<<" ";
			}
			cout<<endl;
		}
	}	
}