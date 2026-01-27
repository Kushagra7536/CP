#include<bits/stdc++.h>
using namespace std;

long long find(long long n, long long k){

	if(n%2==0){
		if(k<=n/2){
			long long target=1,pos=k-1;
			while(pos--) target+=2;
			return target;
		}
		else{
			long long target=2,pos=((k-(n/2)))-1;
			while(pos--) target+=2;
			return target;
		}
	}
	else{
		if(k<=(n+1)/2){
			long long target=1,pos=k-1;
			while(pos--) target+=2;
			return target;
		}
		else{
			long long target=2,pos=((k-((n+1)/2)))-1;
			while(pos--) target+=2;
			return target;
		}
	}
}

int main(){
	long long n,k;
	cin>>n>>k;

	cout<<find(n,k)<<endl;
}