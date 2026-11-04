#include<bits/stdc++.h>
using namespace std;
 
int main(){
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	int n;
	cin>>n;
	vector<pair<int,int>> v;
 
	for(int i=0; i<(2*n); i++){
		int temp;
		cin>>temp;
		pair<int,int> p={temp,i+1};
		v.emplace_back(p);
	}
 
	sort(v.begin(),v.end());
 
 	bool possible = true;
    for(int i=0; i<2*n; i+=2){
        if(v[i].first != v[i+1].first){
            possible = false;
            break;
        }
    }
    
    if(!possible){
        cout<<"-1"<<endl;
    }
    else{
        for(int i=0; i<2*n; i+=2){
            cout<<v[i].second<<" "<<v[i+1].second<<endl;
        }
    }
}