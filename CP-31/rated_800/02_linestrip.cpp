#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while (t--){
		int n,x;
		cin>> n >> x;
		vector<int> a(n+2);
		a[0]=0;
		a[n+1]=x;
		for(int i=1; i<=n ; i++){
			cin>> a[i];
		}
		int max=0;
		for(int i=0; i<n+1 ;i++){
			if (2*(a[i+1]-a[i]) > max && i==n){
				max=2*(a[i+1]-a[i]);
			}
			else if((a[i+1]-a[i]) > max){
				max=(a[i+1]-a[i]);
			}
		}
		cout<< max <<endl;
	}
}