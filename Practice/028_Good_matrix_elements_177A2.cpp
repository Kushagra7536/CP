#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
		vector<vector<int>> v(n,vector<int>(n));
		int sum=0;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin>>v[i][j];
				if(i==j) sum+=v[i][j];
				if(i==(n-1)/2 || j==(n-1)/2) sum+=v[i][j];
				if(j==(n-1-i)) sum+=v[i][j];
				if(i==(n-1)/2 && j==(n-1)/2) sum-=(2*v[i][j]);
			}
		}

		cout<<sum<<endl;
}

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n; cin>>n; 
// 	int sum=0,temp;
// 	for(int i=0; i<n; i++){
// 		for(int j=0; j<n; j++){
// 			cin>>temp;
// 			if(i==j) sum+=temp;
//  			if(i==(n-1)/2 || j==(n-1)/2) sum+=temp;
// 			if(j==(n-1-i)) sum+=temp;
// 			if(i==(n-1)/2 && j==(n-1)/2) sum-=(2*temp);
// 		}
// 	}

// 	cout<<sum<<endl;
// }