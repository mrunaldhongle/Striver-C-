#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
	int count =0;
	int maxCount= 0;
	
	for(int i = 0; i< nums.size(); i++){
		if(nums[i]== 1)
		
		{
		count++;
		if(count>maxCount)
		maxCount = count;
		}
		else{
			count=0;
		}
	}
	return maxCount;
}
int main(){
	vector<int> nums;
	
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(0);
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(1);
	
	int ans = findMaxConsecutiveOnes(nums);
	cout<< ans;
	return 0;
}
