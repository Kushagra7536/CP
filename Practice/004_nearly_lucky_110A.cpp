#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;

	int lucky_count=0;
	int digit=0;

	while(n>0){
		digit=n%10;
		if (digit==4 || digit==7) {lucky_count++;}
		n=n/10;
	}

	if (lucky_count==0) cout<<"NO"<<endl;
	else{
		bool flag = true;
		while(lucky_count>0){
			digit=lucky_count%10;
			if (digit!=4 && digit!=7){
				flag = false;
				break;
			}
			lucky_count=lucky_count/10;
		}

		if (flag==true) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}