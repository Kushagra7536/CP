#include<bits/stdc++.h>
using namespace std;
 
int main(){
	long long k,n,w;
	cin>>k>>n>>w;
	long long t_sum=0;
 
	for(int i=1; i<=w; i++){
		t_sum+=(i*k);
	}
 
	if(n>t_sum) cout<<'0'<<endl;
	else cout<<t_sum-n<<endl;
}