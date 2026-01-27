#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n,k,x;
		cin>>n>>k>>x;

		if(x!=1){
			cout<<"YES"<<endl;
			cout<<n<<endl; 
			while(n--) cout<<"1"<<" ";
			cout<<endl;
		}
		else{
			if(k==1 || (k==2 && n%2==1)){
				cout<<"NO"<<endl;
			}
			else{
				cout<<"YES"<<endl;
				if(n%2==0){
					cout<<n/2<<endl;
					int temp=n/2;
					while(temp--) cout<<"2"<<" ";
					cout<<endl;
				}
				else{
					vector<int> v;
					int temp=n;
					while(temp!=3){
						v.push_back(2);
						temp-=2;
					}
					v.push_back(3);

					cout<<v.size()<<endl;
					for(auto x : v){
						cout<<x<<" ";
					}
					cout<<endl;
				}
			}
		}
	}
}