//Fibonacci series me har next number pichle 2 numbers ka sum hota hai.
#include<bits/stdc++.h>//F(n) = F(n-1) + F(n-2)
using namespace std;
int main(){
	int N;
	cin>>N;
	int a=0, b=1;
	cout<<a<<" "<<b<<" ";
	for( int i = 2; i <= N; i++){
		int c=a+b;
		cout<<c<<" ";
		a=b;
		b=c;
		
	}
	return 0;
}
