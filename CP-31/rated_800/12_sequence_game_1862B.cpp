#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t; cin>>t;
	while(t--){
		long long n; cin>>n;
		vector<long long> b(n);
		for(long long  i=0; i<n; i++){
			cin>>b[i];
		}

		vector<long long> a;
		a.push_back(b[0]);
		long long i=1;
		while(i<n){
			if(b[i-1]>b[i]){
				a.push_back(1);
				a.push_back(b[i]);
			}
			else a.push_back(b[i]);
			i++;
		}

		cout<<a.size()<<endl;
		for(long long i=0; i<a.size(); i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;

	}
}







// in the given sequence b , 
// as a result of condition v[i−1] ≤ v[i] , then v[i] appears in b
// so in {4 6 3} , 3 must have occured bcoz there was a number smalller 
// than 3 between 6 and 3 , so {4 6 1 3}