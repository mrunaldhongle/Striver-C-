//Find Second Smallest and Second Largest Element in an array
#include<bits/stdc++.h>
using namespace std;

void getElements(int arr[], int n){
	if(n<2){
		cout<<"second smallest element: -1\n";
		cout<<"second largest element: -1";
		return;
	}
	sort(arr, arr+n);
	
	int secondSmallest=arr[1];
	int secondLargest=arr[n-2];
	
	cout<<"Second Smallest Element: "<<secondSmallest<<endl;
	cout<<"Second Largest Element: "<<secondLargest;
}

int main(){
	int arr[]={3,6,4,6,6,10};
	int n =6;
	getElements(arr, n);
	
	return 0;
}
