#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int count=0,seq=0;
		for (int i=0; i<n ;i++){
			char c;
			cin>>c;
			if (c=='.'){
				count++;
				seq++;
			}
			else if (c=='#'){
				seq=0;
			}
			if (seq==3){
				break;
			}
		}
		if (seq==3)
			cout<< 2 <<endl;
		else 
			cout<< count <<endl;
	}
	return 0;
}