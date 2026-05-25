//Right Rotation
#include <bits/stdc++.h>
using namespace std;
void rightRotation(vector<int>& nums, int k){
	int n= nums.size();
	k=k%n;
	
	vector<int> temp;
	for(int i = n-k; i< n; i++){
		temp.push_back(nums[i]);
	}
   for(int i = n-k-1;i>=0; i--){
	nums[i+k]=nums[i];
}
    for( int i = 0; i< k; i++){
    	nums[i]=temp[i];
	}
}
   int main(){
   	vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
   	int k =2;
   	
   	rightRotation(nums, k);
   	for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
}
