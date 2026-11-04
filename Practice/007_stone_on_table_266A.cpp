#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector <char> a(n);

	for (int i=0; i<n; i++){
		cin>>a[i];
	}

	vector<char> temp = a;
	int i=0;
	while(i<temp.size()-1){
		if (temp[i]==temp[i+1]) temp.erase(temp.begin()+i);
		else i++;
	}
	cout<<a.size()-temp.size()<<endl;

}