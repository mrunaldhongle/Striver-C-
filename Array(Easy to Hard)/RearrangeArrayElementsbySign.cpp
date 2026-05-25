//Rearrange Array Elements by Sign
#include <bits/stdc++.h>
using namespace std;
class ArrayManipulator{
	public:
		vector<int> RearrangeBysign(vector<int>& A, int n){
			vector<int> pos;
			vector<int> neg;
			
			for(int i = 0; i<n; i++){
				if(A[i]>0)
				pos.push_back(A[i]);
				else
				neg.push_back(A[i]);
			}
			for(int i = 0; i<n/2; i++){
				A[2*i]=pos[i];
				A[2*i+1]= neg[i];
			}
			return A;
		}
};
int main(){
	int n=4;
	vector<int> A;
	A.push_back(1);
	A.push_back(2);
	A.push_back(-4);
	A.push_back(-5);
	ArrayManipulator obj;
	vector<int> ans= obj.RearrangeBysign(A,n);
	for(int i=0; i<ans.size(); i++){
		cout<<ans[i]<<" ";
		
	}
	return 0;
}
