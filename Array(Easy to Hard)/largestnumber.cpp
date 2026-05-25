//find the largest element in an array
#include<bits/stdc++.h>
using namespace std;
int findLargest(int arr[], int n)
{
	int largest= arr[0];
	
	for(int i =1;i<n; i++){
		if(arr[i]>largest){
			largest=arr[i];
		}
	}
	return largest;
}
int main(){
	int arr1[]={2,3,4,1,8};
	int arr2[]={4,5,8,2,1};
	
	int n1 = 5;
	int n2 = 5;
	
	cout<<"Largest element is:"<<findLargest(arr1, n1)<<endl;
	cout<<"Largest element is:"<<findLargest(arr2, n2)<<endl;
	
	return 0;
	
}
