#include<bits/stdc++.h>

using namespace std;

int countDigits(int n){
	
	int cnt = 0;
	while(n>0){
		
		cnt = cnt + 1;
		
		n= n/10;
	}
	return cnt;
}
 int main(){
 	int N;
 	cin>>N;
 	cout<<"N:"<<N<<endl;
 	int digits = countDigits(N);
 	cout<<"Number of Digits in N:"<<digits<<endl;
 	return 0;
 }

