#include<bits/stdc++.h>
using namespace std;

int check(string s, int n){
	int distinct_count=0;
	for(int i=0; i<n; i++){
		bool is_duplicate = false;
		for (int j=0; j<i; j++){
			if(s[j]==s[i]){
				is_duplicate=true;
				break;
			}
		}
		if(is_duplicate==false) distinct_count++;
	}
	return distinct_count;
}

int main(){
	string s;
	cin>>s;
	int d_count = check(s,s.length());
	if (d_count%2==0) cout<<"CHAT WITH HER!"<<endl;
	else cout<<"IGNORE HIM!"<<endl;
}