//Print all Divisors of a given Number
#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cout<<"Enter a number:";
	cin>>N;
	cout<<"Divisor of "<<N<<" are: ";
	for(int i = 1; i<=N ; i++){
	if(N % i ==0){
		cout<< i << " ";
	}
	
	}
	cout << endl;

    return 0;
}
