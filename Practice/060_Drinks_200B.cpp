#include<bits/stdc++.h>
using namespace std;

int main(){
	double n; cin>>n;
	vector<double> v(n);
	double sum=0;
	for(int i=0; i<n; i++){
		cin>>v[i];
		sum+=v[i];
	}

	cout<<sum/n<<endl;
}