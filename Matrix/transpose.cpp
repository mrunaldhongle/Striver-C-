//Transpose of a Matrix
#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<vector<int> > mat;
	mat.push_back(vector<int>());
    mat[0].push_back(1);
    mat[0].push_back(2);

    mat.push_back(vector<int>());
    mat[1].push_back(9);
    mat[1].push_back(-2);
	int m =mat.size();
	int n = mat[0].size();
	vector<vector<int> > transpose(n, vector<int>(m));
	//fill transpose
	for(int i = 0; i< m; i++){
		for(int j=0; j<n; j++){
			transpose[j][i]=mat[i][j];
		}
	}
	//print transpose
	cout<<"Transpose Matrix:\n";
	for(int i = 0; i<n; i++){
		for(int j =0; j<m;j++){
			cout<<transpose[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;

	}
