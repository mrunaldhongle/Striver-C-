//Maximum Subarray Sum- kadane's Algorithm
#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int>& arr){
	int currentSum = arr[0];
	int maxSum = arr[0];
    for(int i= 1; i< arr.size(); i++){
    	currentSum = max(arr[i], currentSum + arr[i]);
    	maxSum = max(maxSum, currentSum);
    	
	}
	return maxSum;
}
int main(){
	vector<int>arr;
	arr.push_back(9);
	arr.push_back(-3);
	arr.push_back(3);
	arr.push_back(-1);
	arr.push_back(6);
	arr.push_back(-5);
	cout<<maxSubarraySum(arr);
}
