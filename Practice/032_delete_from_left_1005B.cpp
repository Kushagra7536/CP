#include<bits/stdc++.h>
using namespace std;

int main(){
	string s,t;
	cin>>s>>t;

	int s_length=s.length();
	int t_length=t.length();

	if(s[s_length-1]==t[t_length-1]){
		int cnt=0;
		while(s_length>0 && t_length>0){
			if(s[s_length-1]!=t[t_length-1]) break;
			else{
				cnt++; s_length--; t_length--;
			}
		}
		cout<<(s.length()-cnt)+(t.length()-cnt)<<endl;
	}
	else cout<<s.length()+t.length()<<endl;
}