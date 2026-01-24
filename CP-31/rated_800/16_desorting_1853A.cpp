#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> v(n);
		for(int i=0; i<n; i++){
			cin>>v[i];
		}

		vector<int> diff;
		for(int i=0; i<n-1; i++){
			diff.push_back(v[i+1]-v[i]);
		}

		auto min_diff = min_element(diff.begin(),diff.end());

		vector<int> temp(v);
		sort(temp.begin(),temp.end());
		if(temp==v){
			if(*min_diff==0) cout<<"1"<<endl;
			else if(*min_diff	==2) cout<<"2"<<endl;
			else if((*min_diff)%2==0) cout<<((*min_diff)/2)+1<<endl;
			else cout<<(((*min_diff)+1)/2)<<endl;
		}
		else cout<<"0"<<endl;
			
	}
}