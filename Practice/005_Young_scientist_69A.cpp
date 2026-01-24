#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<vector<int>> a(n,vector<int>(3));

	for (int i=0; i<n; i++){
		for (int j=0; j<3; j++){
			cin>>a[i][j];
		}
	}

	int temp_sum=0,x_sum=0,y_sum=0,z_sum=0;
	for (int j=0; j<3; j++){
		for (int i=0; i<n; i++){
			temp_sum+=a[i][j];
		}
	if (j==0) x_sum = temp_sum;
	else if (j==1) y_sum==temp_sum;
	else z_sum==temp_sum;
	}

	if (x_sum==0 && y_sum==0 && z_sum==0) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}