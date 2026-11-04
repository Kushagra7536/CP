 #include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,sum;
		cin>>n;
		sum=0;
		vector<int> v(n-1);
		for(int i=0; i<n-1; i++){
			cin>>v[i];
		}

		for(int i=0; i<n-1; i++){
			sum=sum+v[i];
		}

		sum =(sum*(-1));
		cout<<sum<<endl;
	}
}