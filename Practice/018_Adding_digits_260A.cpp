#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a,b,n;
	cin>>a>>b>>n;

	for(int j=0; j<10; j++){
		long long temp=a;
		temp=(temp*10)+j;
		if(temp%b==0){
			a=temp;
			break;
		}
	}

	if(a%b==0){
		string as=to_string(a);
		for(int i=0; i<n-1; i++){
			as=as+'0';
		}
		cout<<as<<endl;
	}

	else cout<<"-1"<<endl;
}