#include<bits/stdc++.h>
using namespace std;

bool custom (pair<int,int> p1,pair<int,int> p2){
	if(p1.first>p2.first) return true;
	if(p1.first<p2.first) return false;

	if(p1.second<p2.second) return true;
	else return false;
}

int count(pair<int,int> target , vector<pair<int,int>> v){
	int cnt = 0;
	for(int i=0; i<v.size(); i++){
		if(v[i].first==target.first && v[i].second==target.second) 
			cnt++;
	}
	return cnt;
}

int main(){
	int n,k,p,t;
	cin>>n>>k;
	vector<pair<int,int>> v;
	for(int i=0; i<n; i++){
		cin>>p>>t;
		v.emplace_back(p,t);
	}

	sort(v.begin(),v.end(),custom);


	auto temp = v[k-1];
	cout<<count(temp,v)<<endl;

}