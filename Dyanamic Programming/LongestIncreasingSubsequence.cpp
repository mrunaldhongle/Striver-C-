#include <bits/stdc++.h>
using namespace std;

int LIS(vector<int>& arr){
	int n= arr.size();
	vector<int> dp(n, 1);
	for(int i=0; i<n; i++){
		for(int j =0; j<i; j++){
			if(arr[j]<arr[i]){
				dp[i]=max(dp[i], dp[j]+1);
			}
		}
	}
	return *max_element(dp.begin(), dp.end());
}
int main(){
	vector<int> arr;
	arr.push_back(3);
	arr.push_back(10);
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(20);
    arr.push_back(30);
    cout << LIS(arr);
}
