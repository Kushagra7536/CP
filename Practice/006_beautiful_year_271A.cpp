#include<bits/stdc++.h>
using namespace std;

bool check_distinct(int n){
	vector<int> a;
	int digit=0;
	while(n>0){
		digit=n%10;
		a.emplace_back(digit);
		n=n/10;
	}
	for(int i=a.size()-1; i>0; i--){
		for(int j=i-1; j>=0; j--){
			if (a[j]==a[i]){
				return false;
			}
		}
	}
	return true;
}

int get_year(int n){
	if (check_distinct(n)) return n;
	else return get_year(n+1);
}


int main(){
	int n;
	cin>>n;

	cout<<get_year(n+1)<<endl;

}
