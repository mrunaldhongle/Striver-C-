//Count frequency of each element in the array
#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[]={10,5,10,15,10,5};
	int n = 6;
	for(int i = 0; i<n; i++){
		int count = 0;
		for(int j = 0; j < n; j++){
			if(arr[i]==arr[j]){
				count++;
			}
		}
		cout<<arr[i]<<" "<<count<<endl;
	}
}
