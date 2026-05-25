#include<bits/stdc++.h>

using namespace std;

int reverseNumber(int n){
	
	int revNum = 0;
	while(n>0){
		int lastDigit= n%10;
		
		revNum = revNum * 10 + lastDigit;
		
		n = n/10;
	}
	return revNum;
}  
  int main(){
  	int num;
  	cin>>num;
  	cout<<reverseNumber(num)<<endl;
    return 0;
}
