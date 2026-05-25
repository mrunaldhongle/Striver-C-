//Insertion Sort->Time complexity :-best case :- O(N), Worst Case=O(N^2)
//Space complexity:-O(1)
#include <bits/stdc++.h>
using namespace std;

void Insertion_sort(int arr[],int n)
{
	for(int i = 1; i<n; i++){
		int key = arr[i];
		int j = i-1;
		
		
		while( j>= 0 && arr[j]>key){
		    arr[j+1]=arr[j];
			j--;
		}
			arr[j+1]=key;
		
		
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
	
	Insertion_sort(arr,n);
	
	cout<<"Sorted array:\n";
	for(int i = 0; i< n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
	
}
