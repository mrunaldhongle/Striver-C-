#include<bits/stdc++.h>
using namespace std;

void spiralPrint(vector<vector<int> > &mat){
	int m = mat.size();
	int n= mat[0].size();
	
	int top=0, bottom=m-1;
	int left = 0, right = n-1;
	
	while(left<=right && top <= bottom){
		//top row
		for(int i = left; i<=right; i++){
			cout<<mat[top][i]<<" ";
		}
		top++;
		//right column
		for(int i= top; i<=bottom; i++){
			cout<<mat[i][right]<<" ";
		}
		right--;
		//bottom row
		if(top<=bottom){
			for(int i = right; i>= left; i--){
			cout<<mat[bottom][i]<<" ";
			}
			bottom--;
		}
		//left column
		if(left<=right){
			for(int i = left; i>= right; i--){
				cout<<mat[i][left]<<" ";
			}
			left--;
		}
}
}
int main(){
    vector<vector<int> > mat;

    // Manually inserting values
    mat.push_back(vector<int>());
    mat[0].push_back(1);
    mat[0].push_back(2);
    mat[0].push_back(3);
    mat[0].push_back(4);

    mat.push_back(vector<int>());
    mat[1].push_back(5);
    mat[1].push_back(6);
    mat[1].push_back(7);
    mat[1].push_back(8);

    mat.push_back(vector<int>());
    mat[2].push_back(9);
    mat[2].push_back(10);
    mat[2].push_back(11);
    mat[2].push_back(12);

    mat.push_back(vector<int>());
    mat[3].push_back(13);
    mat[3].push_back(14);
    mat[3].push_back(15);
    mat[3].push_back(16);

    spiralPrint(mat);
    return 0;
}
