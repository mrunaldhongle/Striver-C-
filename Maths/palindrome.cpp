#include<bits/stdc++.h>

using namespace std;

bool palindrome(int n){
	
	int revNum = 0;
	int dup = n;
	while(n>0){
		int lastDigit= n%10;
		
		revNum = revNum * 10 + lastDigit;
		
		n = n/10;
	}
	if(dup==revNum){
		return true;
	}else{
		return false;
	}

}  
  int main(){
  	int num;
  	cin>>num;
  	if(palindrome(num)){
  		cout<<num<<"is a palindrome"<<endl;
  		
	  }else{
	  	cout<<num<<"is not a palindrome"<<endl;
	  }
    return 0;
}
