
#include<bits/stdc++.h>
using namespace std;

int check(vector<int> a, int n){
	int distinct_count=0;
	for(int i=0; i<n; i++){
		bool is_duplicate = false;
		for (int j=0; j<i; j++){
			if(a[j]==a[i]){
				is_duplicate=true;
				break;
			}
		}
		if(is_duplicate==false) distinct_count++;
	}
	return distinct_count;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		int checkin = check(a,n);
		if (checkin == 1) cout<<"yes"<<endl;
		else if (checkin > 2) cout<<"no"<<endl;
		else{
			 int occ_first = count(a.begin(),a.end(),a[0]);
			 int temp=a[0], i=0;
			 while(temp==a[0] && i<n-1){
				 temp=a[i+1];
				 i++;
			 }
			 int occ_second = count(a.begin(),a.end(),temp);
			 if (n%2==0){
				if (occ_first==occ_second)
					 cout<<"Yes"<<endl;
				else cout<<"no"<<endl; 	
			}
			else{
				if(occ_first - occ_second == 1 || occ_first-occ_second==-1)
					 cout<<"Yes"<<endl;
				else cout<<"no"<<endl;
			}

		}
	}
}