//Find the number that appears once, others appear twice
#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
		int singleNumber(vector<int>& arr){
		    int xorr = 0;
			for(int i = 0; i < arr.size(); i++){
				xorr = xorr ^ arr[i];
				
			}	
			return xorr;
		}
};
int main(){
	vector<int> arr;
	 arr.push_back(2);
	 arr.push_back(2);
	 arr.push_back(5);
	 arr.push_back(5);
	 arr.push_back(6);
	
	Solution obj;
	cout<<obj.singleNumber(arr);
	return 0;
}

