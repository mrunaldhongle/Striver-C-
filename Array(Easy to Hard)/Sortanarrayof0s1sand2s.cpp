//Sort an array of 0s, 1s and 2s
#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
		
		void sortZeroOneTwo(vector<int>& nums){
			int cnt0 = 0, cnt1 = 0, cnt2 = 0;
			
			for(int i= 0; i< nums.size(); i++){
				if(nums[i]==0)
				cnt0++;
				else if (nums[i]==1)
				cnt1++;
				else cnt2++;
			} 
			//fill the first ele
			for(int i = 0; i< cnt0; i++){
				nums[i]=0;
				
			}
			for(int i = cnt0; i< cnt0+ cnt1; i++){
				nums[i]=1;
			}
			for( int i = cnt0+cnt1; i< nums.size(); i++){
				nums[i]=2;
			}
		}
};
int main(){
	vector<int> nums;
	nums.push_back(0);
	nums.push_back(2);
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(0);
	nums.push_back(1);
	Solution sol;
	sol.sortZeroOneTwo(nums);
	cout<<"After sorting:"<<endl;
	for(int i=0; i<nums.size(); i++){
		cout<<nums[i]<<" ";
		
	}
	cout<<endl;
	return 0;
}
