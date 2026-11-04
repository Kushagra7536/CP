#include <vector>
#include <iostream>
using namespace std;
 
// to count number of distincts in a vector
// int check(vector<int> s, int n){
// 	int distinct_count=0;
// 	for(int i=0; i<n; i++){
// 		bool is_duplicate = false;
// 		for (int j=0; j<i; j++){
// 			if(s[j]==s[i]){
// 				is_duplicate=true;
// 				break;
// 			}
// 		}
// 		if(is_duplicate==false) distinct_count++;
// 	}
// 	return distinct_count;
// }
 
 
// int main(){
//     int t; cin>>t;
//     while(t--) {
// 	    int n; cin>>n;
// 	    string s; cin>>s;
// 	    vector<int> v={1};
// 	        for(int i=0; i<n; i++) {
// 	            if(s[i]=='>') {
// 	                v.push_back(*(v.end()-1)-1);
// 	            }
// 	            else v.push_back(*(v.end()-1)+1);
// 	        }
// 	    cout<<check(v,n+1)<<endl;
//     }
//  }


int main(){
    int t; cin>>t;
    while(t--) {
	    int n; cin>>n;
	    string s; cin>>s;

	    int max_greater=0,max_less=0;
	    int cnt_greater=0,cnt_less=0;
	    for(int i=0; i<n; i++){
	    	if(s[i]=='>'){
	    		cnt_greater++;
	    		cnt_less=0;
	    	}
	    	else{
	    		cnt_greater=0;
	    		cnt_less++;
	    	}

	    	if(cnt_greater>max_greater) max_greater=cnt_greater;
	    	if(cnt_less>max_less) max_less=cnt_less; 
	    }

	    cout<<max(max_less,max_greater)+1<<endl;
	}
}