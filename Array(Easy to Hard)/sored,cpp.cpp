//to check if an array is sorted
#include <iostream>
using namespace std;
bool isSorted(int arr[], int n)
{
	for(int i=0; i<n-1; i++){
		if(arr[i]>arr[i+1])
		{
			return false;
		}
	}
		return true;
	}
	int main(){
		int arr1[]={1,2,3,4,5};
		int arr2[]={4,6,8,6,2};
		int n1 = 5;
		int n2 = 5;
		
		if(isSorted(arr1, n1))
		   cout<<"True\n";
		else
		cout<<"False\n";
		if(isSorted(arr2, n2))
		   cout<<"True\n";
		else
		cout<<"False\n";
		return 0;
		
	}

