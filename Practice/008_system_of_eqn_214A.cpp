

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	
	int count = 0;
	

	for(int b = 0; b * b <= m; b++){
		int a = m - b * b;
		
		if(a >= 0 && b + a * a == n){
			count++;
		}
	}
	
	cout << count << endl;
	
	return 0;
}
