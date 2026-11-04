#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	int operations=0;
	auto max = max_element(a.begin(),a.end());
	auto max_index = distance(a.begin(),max);

	for(int i=max_index; i>0; i--){
		swap(a[i],a[i-1]);
		operations++;
	}

	auto min = min_element(a.begin(),a.end());
	int i = n-1;
	while(i>=0){
		if(a[i]==*min) break;
		i--;
	}

	cout<<operations+(n-1-i)<<endl;


}