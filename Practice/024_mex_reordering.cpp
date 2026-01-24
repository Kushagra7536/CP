#include<bits/stdc++.h>
using namespace std;

// vector<int> distinctify(vector<int> v){
// 	vector<int> temp;
// 	int i=0;
// 	while(i<v.size()){
// 		bool is_duplicate = false;
// 		for (int j=0; j<i; j++){
// 			if(v[j]==v[i]){
// 				is_duplicate=true;
// 				break;
// 			}
// 		}
// 		if(is_duplicate==false) temp.push_back(v[i]);
// 		i++;
// 	}
// 	return temp;
// }

int mex(vector<int> v){
	sort(v.begin(),v.end());
	v.erase((unique(v.begin(),v.end())),v.end());
	// vector<int> vct = distinctify(v);
	for(int i=0; i<vct.size(); i++){
		if(i!=vct[i]) return i;
	}
	return vct.size();
}

int main(){ 
	int t;
	cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> a(n);
		for(int i=0; i<n; i++){
			cin>>a[i];
		}

		sort(a.begin(),a.end());
		bool flag = true;
		for(int i=0; i<n-1; i++){
			vector<int> temp1,temp2;
			for(int j=0; j<n; j++){
				if(j<=i) {temp1.push_back(a[j]);}
				else {temp2.push_back(a[j]);}
			}
			if(mex(temp1) == mex(temp2)){
				flag = false;
				break;
		   	}
		}

		if(flag == false) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
}