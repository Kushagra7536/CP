#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,attempt=0;
	cin>>n;
	for(int i=0; i<n; i++){
		vector<int> temp(3);
		for(int i=0; i<3; i++){
			cin>>temp[i];
		}
		int cnt = count(temp.begin(),temp.end(),1);
		if(cnt>=2) attempt++; 
	}
	cout<<attempt<<endl;
}