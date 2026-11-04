#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int cnt_even=0,cnt_odd=0,last_e=0,last_odd=0;
	for(int i=0; i<n; i++){
		int temp; cin>>temp;
		if(temp%2==0){ cnt_even++; last_e=i+1;}
		else{cnt_odd++; last_odd=i+1;}
	}

	if(cnt_even>cnt_odd) cout<<last_odd<<endl;
	else cout<<last_e<<endl;
}