#include<bits/stdc++.h>
using namespace std;

void errect_pyramid(int N){
	for(int i=0; i<N ; i++){
		for(int j=0; j<N-i-1; j++){
			cout<<" ";
		}
		 for (int j = 0; j < 2 * i + 1; j++) {
                cout << "*";
            }
        for(int j = 0; j<i; j++){
        	cout<<" ";
		}
		cout<<endl;
	}
}
void inverted_pyramid(int N) {
        for (int i = 0; i < N; i++) {
            // Print spaces before stars
            for (int j = 0; j < i; j++) {
                cout << " ";
            }
            // Print stars
            for (int j = 0; j < 2 * N - (2 * i + 1); j++) {
                cout << "*";
            }
            // Print spaces after stars
            for (int j = 0; j < i; j++) {
                cout << " ";
            }
            cout << endl;
        }
    }
int main(){
	int N=5;
errect_pyramid(N);
inverted_pyramid(N);
	return 0;
}
