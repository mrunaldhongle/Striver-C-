//Bubble Sort->Time complexity :-best case :- O(N), Worst Case=O(N^2)
//Space complexity:-O(1)
#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n)
{
	for(int i = 0; i<n-1; i++){
		bool swapped = false;
		
		for(int j= 0; j<n-i-1; j++){
			if(arr[j]<arr[j+1])
			{
			int temp= arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			swapped =true;	
			}
		}
		if(swapped==false)
		break;
		
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
	
	bubble_sort(arr,n);
	
	cout<<"Sorted array:\n";
	for(int i = 0; i< n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
	
}
