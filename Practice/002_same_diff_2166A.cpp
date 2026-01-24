#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		char ch = s[n-1];
		int count=0;
		for (int i=0; i<n ;i++){
			if (s[i]==ch) count++;
		}
		cout<<n-count<<endl;
	}
}


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int t; cin>>t;
// 	while(t--){
// 		int n; cin>>n;
// 		string s; cin>>s;
// 		int i=n-2, cnt=0;
// 		while(i>=0){
// 			if(s[i]!=s[i+1]){
// 				s[i] = s[i+1];
// 				cnt++;
// 			}
// 			i--;
// 		}
// 		cout<<cnt<<endl;
// 	}
// }