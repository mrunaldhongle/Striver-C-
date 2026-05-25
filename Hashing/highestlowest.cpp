//Find the highest/lowest frequency element
#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[]={10,5,10,15,10,5};
	int n = 6;
	
	bool visited[n] = {false};
	
	int maxFreq=0, minFreq=n;
	int maxEle=0, minEle=0;
	
	for(int i= 0; i<n; i++){
		if(visited[i]==true)
		continue;
		int count =1;
		
			
			for(int j=i+1; j<n;j++){
				if(arr[i]==arr[j]){
					visited[j]=true;
					count++;
				}
			}
			if(count>maxFreq){
				maxFreq = count;
				maxEle=arr[i];
			}
		}
		cout<<"Highest frequency element"<<maxEle<<endl;
		cout<<"Lowest frequency element"<<minEle<<endl;
}

