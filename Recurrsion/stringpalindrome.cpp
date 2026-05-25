#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin>>str;
	bool isPalindrome=true;
	
	for(int i=0; i< str.length()/2; i++){
		if(str[i] != str[str.length()-i-1])
		{
			isPalindrome=false;
			break;
		}
	}
	if(isPalindrome)
	cout<<"Palindrome";
	else
	cout<<"Not Palindrome";
	return 0;
}
