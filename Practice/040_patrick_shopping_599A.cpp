#include<bits/stdc++.h>
using namespace std;

int main(){
	long long d1,d2,d3;
	cin>>d1>>d2>>d3;

	vector<long long> v={d1+d2+d3, (2*d1)+(2*d2), d1+(2*d3)+d1, d2+(2*d3)+d2};
	long long ans = *min_element(v.begin(),v.end());

	cout<<ans<<endl;
}