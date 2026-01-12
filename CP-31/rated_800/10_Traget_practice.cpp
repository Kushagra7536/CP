// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		vector<vector<char>> a(10,vector<char>(10));
		
// 		for (int i=0; i<10; i++){
// 			for (int j=0; j<10; j++){
// 				cin>>a[i][j];
// 			}
// 		}

// 		int score=0;
// 		for (int i=0; i<10; i++){
// 			for (int j=0; j<10; j++){
// 				if(a[i][j]=='X'){

// 					// distance from nearest edge
// 					vector<int> temp={i+1,10-i,j+1,10-j}; 
// 					auto temp_min=min_element(temp.begin(),temp.end());
					
// 					score+=*temp_min;
// 				}
// 			}
// 		}

// 		cout<<score<<endl;
// 	}
// }


#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		char temp;

		int score=0;
		for (int i=0; i<10; i++){
			for (int j=0; j<10; j++){
				cin>>temp;
				if(temp=='X'){

					// distance from nearest edge
					vector<int> temp={i+1,10-i,j+1,10-j}; 
					auto temp_min=min_element(temp.begin(),temp.end());
					
					score+=*temp_min;
				}
			}
		}


		cout<<score<<endl;
	}
}