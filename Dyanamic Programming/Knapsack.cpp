#include <bits/stdc++.h>
using namespace std;

int knapsack(int W, vector<int>& val, vector<int>& wt) {
    int n = val.size();

    vector<vector<int> > dp(n+1, vector<int>(W+1, 0));

    for(int i = 1; i <= n; i++) {
        for(int w = 1; w <= W; w++) {

            if(wt[i-1] <= w) {
                dp[i][w] = max(
                    val[i-1] + dp[i-1][w - wt[i-1]],
                    dp[i-1][w]
                );
            } else {
                dp[i][w] = dp[i-1][w];
            }
        }
    }

    return dp[n][W];
}

int main() {
    vector<int> val;
    val.push_back(1);
    val.push_back(2);
    val.push_back(3);

    vector<int> wt;
    wt.push_back(4);
    wt.push_back(5);
    wt.push_back(1);

    int W = 4;

    cout << knapsack(W, val, wt);

    return 0;
}
