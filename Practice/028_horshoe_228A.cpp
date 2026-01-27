#include<bits/stdc++.h>
using namespace std;

int check(vector<int> v){
	sort(v.begin(),v.end());
	v.erase(unique(v.begin(),v.end()),v.end());
	return v.size();
}

int main(){
	vector<int> v(4);
	for(int i=0; i<4; i++){
		cin>>v[i];
	}

	int distinct = check(v);
	cout<<4-distinct<<endl;

}
