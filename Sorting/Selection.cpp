//Selection Sort->Time complexity :-O(N^2)
//Space complexity:-O(1)
#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n)
{
	for(int i = 0; i<n-1; i++){
		int mini = i;
		
		for(int j= i+1; j<n; j++){
			if(arr[j]<arr[mini])
			{
				mini = j;
				
			}
		}
		//swap minimum with first element
		int temp =arr[mini];
		arr[mini]=arr[i];
		arr[i]=temp;
	}
}
int main(){
	int n;
	cout<<"Enter number of elements:",
	cin>>n;
	int arr[n];
	cout<<"Enter elements:\n";
	for(int i = 0; i<n; i++){
		cin>> arr[i];
	}
	
	selection_sort(arr,n);
	
	cout<<"Sorted array:\n";
	for(int i = 0; i< n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
	
}
