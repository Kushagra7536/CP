#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t; cin>>t;
	while(t--){
		long long a,b,c,d;
		cin>>a>>b>>c>>d;

		if(a==c && b==d) cout<<"0"<<endl;
		else if(b<d || b==d){
			int y_steps = d-b;
			a=a+y_steps;
			if(a>c || a==c){
				int x_steps=a-c;
				cout<<y_steps+x_steps<<endl;
			}
			else cout<<"-1"<<endl;
		}
		else cout<<"-1"<<endl;
	}
}
