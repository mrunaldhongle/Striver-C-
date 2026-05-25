//#include<bits/stdc++.h>
//using namespace std;
//
//int removeDuplicate(vector<int> & nums){
//    int i = 0;
//
//    for(int j = 1; j < nums.size(); j++){
//        if(nums[j] != nums[i]){
//            i++;
//            nums[i] = nums[j];
//        }
//    }
//
//    return i + 1;
//}
//
//int main(){
//    vector<int> nums = {0,0,1,1,1,2,2,2,3,3,4,4};
//
//    int k = removeDuplicate(nums);
//
//    cout << "k = " << k << endl;
//    for(int i = 0; i < k; i++){
//        cout << nums[i] << " ";
//    }
//}

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {0,0,1,1,1,2,2,2,3,3,4};

    for(int x : nums) {
        cout << x << " ";
    }
}
