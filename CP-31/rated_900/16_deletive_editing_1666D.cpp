#include<bits/stdc++.h>
using namespace std;

// to count number of distincts in a string
vector<char> check(string s, int n){
	vector<char> distinct;
	for(int i=0; i<n; i++){
		bool is_duplicate = false;
		for (int j=0; j<i; j++){
			if(s[j]==s[i]){
				is_duplicate=true;
				break;
			}
		}
		if(is_duplicate==false) distinct.push_back(s[i]);
	}
	return distinct;
}

int main(){
	int t; cin>>t;
	while(t--){
		string s,tc; cin>>s>>tc;

		vector<char> distinct=check(s,s.length());

		vector<vector<int>> maps(distinct.size(),vector<int>(2));
		for(int i=0; i<distinct.size(); i++){
		    int temp1=count(s.begin(),s.end(),distinct[i]);
		    int temp2=count(tc.begin(),tc.end(),distinct[i]);
		    maps[i][0]=temp1; maps[i][1]=temp2;
		}

		for(int i=0; i<distinct.size(); i++){
			int temp=maps[i][0]-maps[i][1];
			if(temp>0){
				while(temp--){
					auto pos = s.find(distinct[i]);
					if(pos!=string::npos) s.erase(pos,1);
				}
			}
		}

		if (s==tc) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;

	}	
}




