#include<bits/stdc++.h>
using namespace std;
int minMulRec(vector<int> &arr, int i, int j)
{
	if(i+1==j)
	return 0;
	
	int res = INT_MAX;
	
	for(int k =i+1; k<j; k++ ){
		int curr=minMulRec(arr,i,k)+minMulRec(arr,k,j)+arr[i]*arr[k]*arr[j];
		res= min(curr, res);
	}
	return res;
}
int matrixMultiplication(vector<int> &arr)
{
	int n = arr.size();
	return minMulRec(arr,0,n-1);
}
int main(){
	vector<int> arr;
	arr.push_back(2);
	arr.push_back(1);
	arr.push_back(3);
	arr.push_back(4);
	cout<<matrixMultiplication(arr);
	return 0;
}
