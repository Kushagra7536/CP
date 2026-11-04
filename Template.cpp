
// to check if given string is substring of another string
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





// to check if a number has all distinct digits
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




// to count number of distincts in a string
int check(string s, int n){
	int distinct_count=0;
	for(int i=0; i<n; i++){
		bool is_duplicate = false;
		for (int j=0; j<i; j++){
			if(s[j]==s[i]){
				is_duplicate=true;
				break;
			}
		}
		if(is_duplicate==false) distinct_count++;
	}
	return distinct_count;
}




// to check if prime or not 
bool is_prime(long long n){
    if(n < 2) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    // to check only odd divisors uto sqrt(n)
    for(long long i = 3; i * i <= n; i += 2){
        if(n % i == 0) return false;
    }
    return true;
}




// custom logic to sort pair first:descending,second:ascending
bool custom (pair<int,int> p1,pair<int,int> p2){
	if(p1.first>p2.first) return true;
	if(p1.first<p2.first) return false;

	if(p1.second<p2.second) return true;
	else return false;
}

