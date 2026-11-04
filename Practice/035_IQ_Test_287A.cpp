#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<vector<char>> s(4,vector<char>(4));
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cin>>s[i][j];
		}
	}

	// for(int i=0; i<4; i++){
	// 	for(int j=0; j<4; j++){
	// 		cout<<s[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }

	bool possible = false;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			int cnt=1;
			if(s[i][j+1]==s[i][j]) cnt++;
			if(s[i+1][j]==s[i][j]) cnt++;
			if(s[i+1][j+1]==s[i][j]) cnt++;
			// cout<<cnt<<endl;
			if(cnt>=3 || cnt==1) {possible=true; break;}
		}
		if(possible) break;
	}

	if(possible) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;	
}