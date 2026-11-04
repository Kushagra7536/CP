#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	int temp=0;
	vector<int> ans;
	while(t--){
		int a,b; 
		cin>>a>>b;
		temp-=a;
		ans.push_back(temp);
		temp+=b;
		ans.push_back(temp);
	}

	int final = *max_element(ans.begin(),ans.end());
	cout<<final<<endl;
}
