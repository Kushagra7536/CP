#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b; 
	cin>>a>>b;

	int diff_days=min(a,b);
	int rem=a+b-(2*diff_days);
	int pairs=rem/2;

	cout<<diff_days<<" "<<pairs<<endl;
}