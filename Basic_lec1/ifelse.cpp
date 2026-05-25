//#include<bits/stdc++.h>
//
//using namespace std;
//int main(){
//	int age;
//	cin>>age;
//	if(age>=18){
//		cout<<"you are adult";
//		
//	}else{
//		cout<<"you are Bacha";
//	}
//	
//	return 0;
//}

#include<bits/stdc++.h>

using namespace std;
int main(){
	int Marks;
	cin>>Marks;
	if(Marks<25){
		cout<<"Grade: F"<< endl;
		
	}else if(Marks>=25 && Marks<=44){
		cout<<"Grade: E"<< endl;
	}
	else if(Marks>=45 && Marks<=49){
		cout<<"Grade: D"<< endl;
	}
	else if(Marks>=50 && Marks<=59){
		cout<<"Grade: C"<< endl;
	}
	else if(Marks>=60 && Marks<=69){
		cout<<"Grade: B"<< endl;
	}else if(Marks>=70){
		cout<<"Grade: A"<< endl;
	}else{
		cout<<"Invalid Marks Entered"<<endl;
	}
	return 0;
}
