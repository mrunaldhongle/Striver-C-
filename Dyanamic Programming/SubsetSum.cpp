//Subset
#include<bits/stdc++.h>
using namespace std;
bool subSetSum(int arr[], int n, int sum){
	if(sum==0)
	return true;
	if(n==0)
	return false;
	if(arr[n-1]>sum){
		return subSetSum(arr, n-1, sum);
		
	}
	return subSetSum(arr, n-1, sum)||subSetSum(arr, n-1, sum-arr[n-1]);
}
int main(){
	int arr[]={3,34,4,12,5,2};
	int sum=9;
	int n=6;
	if(subSetSum(arr, n, sum))
	cout<<"True";
	else
	cout<<"False";
	return 0;
}
