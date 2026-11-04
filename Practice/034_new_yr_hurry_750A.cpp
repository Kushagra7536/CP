#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int n,k;
	cin>>n>>k;
 
	int r=240-k;
	float i=1;
    bool done = false;
    int temp=n;
	while(temp--){
		float sum = (i/2)*(5+(5*i));
		if(sum>r) {cout<<i-1<<endl; done=true; break;}
		else if(sum==r) {cout<<i<<endl; done=true; break;}
		i++;
	}
    if(!done) cout<<n<<endl;
}