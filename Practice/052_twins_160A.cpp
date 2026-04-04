#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	vector<int> v(n);
	int sum=0;
	for(int i=0; i<n; i++){
		cin>>v[i];
		sum+=v[i];
	}

	sort(v.begin(),v.end(),greater<int>());

	int count=0, temp_sum=0, i=0;
	while(temp_sum<=sum){
		count++;
		temp_sum+=v[i];
		sum-=v[i];
		i++;
	}

	cout<<count<<endl;
}