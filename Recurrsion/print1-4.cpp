#include<bits/stdc++.h>
using namespace std;

void printNumber(int i, int N)
{
	if(i>N)//base condition
	return;
	
	cout<< i << " ";
	
	printNumber(i+1, N);//recursive call
}




int main(){
	int N;
	cin>>N;
    printNumber(1,N);
	return 0;
}
