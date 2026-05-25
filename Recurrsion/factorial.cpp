#include<bits/stdc++.h>
using namespace std;
int factorial(int x){
	int solution = 1;
	for(int i =1; i<=x; i++){
		solution=solution*i;
	}
	return solution;
}
int main(){
	int x;
	cin>>x;
	int result = factorial(x);
	cout<<"The Factorial of number "<< x <<" is "<<result;
	return 0;
}
