#include<bits/stdc++.h>
using namespace std;

int main(){
	string line;
	getline(cin,line);

	transform(line.begin(), line.end(), line.begin(),
    [](unsigned char c){ return tolower(c); });

	string s;
    for(int i=0; i<line.length(); i++){
    	if(line[i]!=' ' && line[i]!='?') s+=line[i];
    }

    if(s[s.length()-1]=='a' || s[s.length()-1]=='e' || s[s.length()-1]=='i' || s[s.length()-1]=='o' || s[s.length()-1]=='u' || s[s.length()-1]=='y') 
    	cout<<"YES"<<endl;
   
    else cout<<"NO"<<endl;
}