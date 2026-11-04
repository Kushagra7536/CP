#include<bits/stdc++.h>
using namespace std;

bool check_substring(string x, string s){
	if(x.length()<s.length()) {return false;}
	else{
		int i=0; 
		while(i<x.length()){
			if(x[i]==s[0]){
				bool temp=true;
				int j=0;
				while(j<s.length()){
					if (x[i+j]!=s[j]){ temp=false; break;}
					j++;
				}
				if(temp==true) return true;
			}
			i++;
		}
		return false;
	}
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        string x,s;
        cin>>n>>m>>x>>s;
        bool found=false;
        int i=0;
       	while(i<=5){
        	if(check_substring(x,s)) {found=true; break;}
        	x=x+x;
        	i++;
        }
        if(found==true) cout<<i<<endl;
        else cout<<"-1"<<endl;
	}
}