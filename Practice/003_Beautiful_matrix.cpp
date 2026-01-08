#include<bits/stdc++.h>
using namespace std;

pair<int,int> get_indices(vector<vector<int>> a){
	int i=0;
	while(i<5){
		int j=0;
		while(j<5){
			if (a[i][j]!=0){return {i,j};}
		    j++;
		}
		i++;
	}
}

int main(){
	vector<vector<int>> a(5 , vector<int>(5));

	for (int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			cin>>a[i][j];
		}
	}
	pair<int,int> indices = get_indices(a);


	int row_shift=abs(indices.first-2);
	int col_shift=abs(indices.second-2);

	cout<<row_shift+col_shift<<endl;

}