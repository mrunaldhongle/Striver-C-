#include <bits/stdc++.h>
using namespace std;

int missingNum(vector<int> &arr){
	
	int n = arr.size() + 1;
	
	vector<int> hash(n+1, 0);
	
	for(int i =0; i<n-1; i++){
		hash[arr[i]]++;
		
	}
	for(int i= 1; i<=n; i++){
		if(hash[i]==0){
			return i;
		}
	}
	return -1;
}
int main(){
	vector<int> arr;

    arr.push_back(8);
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(3);
    arr.push_back(7);
    arr.push_back(1);

	int res = missingNum(arr);
	cout<< res<< endl;
	return 0;
}
