// #include<bits/stdc++.h>
// using namespace std;

// bool check(vector<int> p, int n){
// 	auto max = max_element(p.begin(),p.end());
// 	if (*max == n) return true;
// 	else return false ;
// }

// bool sorted(vector<int> p){
// 	vector<int> temp = p;
// 	sort(temp.begin(),temp.end());
// 	if (temp == p) return true;
// 	else return false;
// }

// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){

// 		int n;
// 		cin>>n;
// 		vector<int> p(n);
// 		for (int i=0; i<n ;i++){
// 			cin>>p[i];
// 		}

// 		bool is_permutation = check(p,n);  // check if it's a valid permutation
// 		if (is_permutation == false) cout<<"no"<<endl; // if no then print "no"

// 		else{                                              // if yes then 
// 			bool is_sort = sorted(p);                     // check if it is already sorted

// 			if (is_sort==true) cout<<"yes"<<endl;       // if already sorted , print yes 

// 			else{                                     
// 			    for (int i=0 ; i<n ; i++){                // if no , then 
// 					for(int i=1; i<n-1; i++){            //  try to sort it
// 						if (p[i-1]<p[i] && p[i]>p[i+1])
// 							swap(p[i],p[i+1]);	
// 					}
// 				}

// 			if(sorted(p)) cout<<"yes"<<endl;     // if now it's sorted , then print "yes"
// 			else cout<<"no"<<endl;              // if still not sorted, print "no"
// 			}
// 		}
// 	}
// }



// the smallest element needs to be in the beginning 
// Because if not 
// Then it will need to be swapped inorder to reach its correct place 
// But swapping occurs only when a element is surrounded by elements smaller than it 
// But since , this is the smallest element that condition will never be satisfied
// in this case the smallest element happens to be 1 

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){

		int n;
		cin>>n;
		vector<int> p(n);
		for (int i=0; i<n ;i++){
			cin>>p[i];
		}

		if (p[0]==1) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
}




		