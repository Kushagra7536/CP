// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n,m;
// 	cin>>n>>m;

// 	vector<int> a(m);
// 	for(int i=0; i<m; i++){
// 		cin>>a[i];
// 	}

// 	int min_earn=0,max_earn=0;

// 	//calculate max
// 	vector<int> temp=a;
// 	for(int i=0; i<n; i++){
// 		auto temp_max=max_element(temp.begin(),temp.end());
// 		auto max_index=distance(temp.begin(),temp_max);
// 		max_earn+=*temp_max;
// 		if(*temp_max-1==0) temp.erase(temp.begin()+max_index);
// 		else temp[max_index]=*temp_max-1;
// 	}

// 	//calculate min
// 	vector<int>temp2=a;
// 	for(int i=0; i<n; i++){
// 		auto temp_min=min_element(temp2.begin(),temp2.end());
// 		auto min_index=distance(temp2.begin(),temp_min);
// 		min_earn+=*temp_min;
// 		if(*temp_min-1==0) temp2.erase(temp2.begin()+min_index);
// 		else temp2[min_index]=*temp_min-1;
// 	}

// 	cout<<max_earn<<" "<<min_earn<<endl;	
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	vector<int> a(m);
	for(int i=0; i<m; i++){
		cin>>a[i];
	}
	
	// Max-heap for maximum earnings
	priority_queue<int> maxHeap(a.begin(), a.end());
	int max_earn = 0;
	for(int i=0; i<n; i++){
		int top = maxHeap.top();
		maxHeap.pop();
		max_earn += top;
		if(top - 1 > 0) {
			maxHeap.push(top - 1);
		}
	}
	
	// Min-heap for minimum earnings
	priority_queue<int, vector<int>, greater<int>> minHeap(a.begin(), a.end());
	int min_earn = 0;
	for(int i=0; i<n; i++){
		int top = minHeap.top();
		minHeap.pop();
		min_earn += top;
		if(top - 1 > 0) {
			minHeap.push(top - 1);
		}
	}
	
	cout<<max_earn<<" "<<min_earn<<endl;
}