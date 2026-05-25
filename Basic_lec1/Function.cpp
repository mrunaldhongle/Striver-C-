//#include<bits/stdc++.h>
////#include<iostream>
//using namespace std;
//
//void functoprint(int n){
//	int i = 1;
//	while(i<=n){
//		cout<<i<<endl;
//		i++;
//	}
//}
//int main(){
////Function:- Call By Value
//    int n;
//    cin>>n;
//    functoprint(n);
//    return 0;
//}

#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

int functoprint(int &n){
	n++;
    return n;
}
int main(){
//Function:- Call By reference
    int n;
    cin>>n;
    functoprint(n);
    cout<<n;
    return 0;
}
