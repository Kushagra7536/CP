#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> v(n);
		for(int i=0; i<n; i++) cin>>v[i];

		int i=1;
		bool found=false;
		while(i<n-1){
			if(v[i]>v[i-1] && v[i]>v[i+1]){
				found = true;
				break;
			}
			i++;
		}

		if(found){
			cout<<"YES"<<endl;
			cout<<i-1+1<<" "<<i+1<<" "<<i+1+1<<endl;
		}
		else cout<<"NO"<<endl;

	}
}