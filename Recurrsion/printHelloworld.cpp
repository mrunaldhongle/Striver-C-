////Print N Times using recurrsion
//#include<bits/stdc++.h>
//using namespace std;
//
//void printName(int n){
//	if(n==0) //Base Condition
//	return;
//	
//	cout<<"Hello"<<endl;
//	
//	printName(n-1);//Recursion call
//	
//}
//
//int main(){
//	int n;
//	cin>>n;
//	printName(n);
//	return 0;
//}

//Print N Times using recurrsion
#include<bits/stdc++.h>
using namespace std;

void printName(int n){
	if(n==0) //Base Condition
	return;
	
	cout<<"Mrunal Dhongle"<<endl;
	
	printName(n-1);//Recursion call
	
}

int main(){
	int n;
	cin>>n;
	printName(n);
	return 0;
}
