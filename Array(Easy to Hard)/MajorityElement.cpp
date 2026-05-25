#include<bits/stdc++.h>
using namespace std;
class Solution{
	public:
		
		int majorityElement(vector<int>& nums){
			
			int n = nums.size();
			
			for(int i = 0; i< n; i++){
				int cnt =0;
			for(int j =0; j<n; j++){
				if(nums[j]==nums[i]){
					cnt++;
				}
			}
			if(cnt>(n/2)){
				return nums[i];
			}
			}
			return -1;
		}
};
int main(){
	vector<int> nums;
	nums.push_back(2);
	nums.push_back(2);
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(2);
	Solution sol;
	int ans = sol.majorityElement(nums);
	cout<<"majority elements is:"<<ans<<endl;
	return 0;
}
