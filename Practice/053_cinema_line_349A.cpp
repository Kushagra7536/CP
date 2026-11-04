#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	bool possible = true;
	map<int,int> mpp;
	mpp[25]=0;
	mpp[50]=0;
	mpp[100]=0;

	for(int i=0; i<n; i++){
		int temp; cin>>temp;
		mpp[temp]++;
		int change = temp-25;
		if(change>50){
			while(change){
				if(change>=50 && mpp[50]>0){
					mpp[50]--; change-=50;
				}
				else if(mpp[25]>0){
					mpp[25]--; change-=25;
				}
				else{possible=false; break;}
			}
		}
		if(change>0){
			if(mpp[change]>0) mpp[change]--;
			else {possible=false; break;}
		}
	}

	// cout<<mpp[25]<<" "<<mpp[50]<<" "<<mpp[100]<<endl;
	if(possible) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
