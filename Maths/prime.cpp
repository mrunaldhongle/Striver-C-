#include<bits/stdc++.h>
using namespace std;
 int main(){
 	int N;
 	cout<<"Enter the Prime Number: ";
 	cin>>N;
 	int count = 0;
 	for( int i = 1; i <=N ; i++){
 		if(N % i == 0){
 			count++;
		 }
	 }
	 if(count==2){
	 	cout<<"True(Prime Number)";
	 	
	 }else{
	 	cout<<"False(Not a Prime Number)";
	 	
	 	
	 }
	 return 0;
 }
