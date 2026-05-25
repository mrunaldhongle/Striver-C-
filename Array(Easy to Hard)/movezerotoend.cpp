////Move All Zeros to End
//#include <bits/stdc++.h>
//using namespace std;
//void moveZeros(vector<int>& nums){
//	vector<int> temp;
//	for(int i= 0; i < nums.size(); i++){
//		if(nums[i]!= 0){
//			temp.push_back(nums[i]);
//		}
//	}
//	int k = temp.size();
//	for(int i = 0; i< k; i++){
//		nums[i]= temp[i];
//	}
//	for(int i = k; i<nums.size(); i++){
//		nums[i]=0;
//	}
//}
//int main() {
//vector<int> nums;
//
//nums.push_back(1);
//nums.push_back(0);
//nums.push_back(2);
//nums.push_back(3);
//nums.push_back(0);
//nums.push_back(4);
//nums.push_back(0);
//nums.push_back(1);
//
//    moveZeros(nums);
//
//    for(int i = 0; i < nums.size(); i++) {
//        cout << nums[i] << " ";
//    }
//}
#include <bits/stdc++.h>
using namespace std;

void moveZeros(vector<int>& nums) {
    int j = 0;

    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] != 0) {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

int main() {
    vector<int> nums;

    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(0);
    nums.push_back(4);
    nums.push_back(0);
    nums.push_back(1);

    moveZeros(nums);

    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
}
