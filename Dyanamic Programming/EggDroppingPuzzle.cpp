//Egg Dropping Puzzle
#include<bits/stdc++.h>
using namespace std;

int eggDrop(int n, int k){
	if(k==1||k==0){
		return k;
	}
	if(n==1){
		return k;
	}
    int res =INT_MAX;
    
    for(int i=1; i<=k; i++){
    	int cur = 1 + max(eggDrop(n-1,i-1),
		                  eggDrop(n,k-i));
		    if(cur<res)
		    res=cur;
	}
	return res;
}
int main(){
	int n=2, k=10;
	cout<<eggDrop(n,k);
	return 0;
}
