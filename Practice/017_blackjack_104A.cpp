
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int need = n - 10;
    
    if(need == 10){
        cout << "15" << endl;
    }
    else if(need >= 1 && need <= 11){
        cout << "4" << endl;
    }
    else{
        cout << "0" << endl;
    }
}