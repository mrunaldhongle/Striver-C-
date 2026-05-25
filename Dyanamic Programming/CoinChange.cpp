#include<bits/stdc++.h>
using namespace std;

int coinRecur(vector<int>& coins, int n, int sum){
    if(sum == 0)
        return 1;
    if(sum < 0 || n == 0)
        return 0;
    
    return coinRecur(coins, n, sum - coins[n-1]) + 
           coinRecur(coins, n-1, sum);
}

int countWays(vector<int> &coins, int sum){
    return coinRecur(coins, coins.size(), sum);
}

int main(){
    int sum = 5;
    vector<int> coins;

    coins.push_back(1);
    coins.push_back(2);
    coins.push_back(3);

    cout << countWays(coins, sum);
    return 0;
}
