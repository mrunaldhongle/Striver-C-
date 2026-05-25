#include<bits/stdc++.h>
using namespace std;

bool wordBreak(string s, vector<string>& dict){
    int n = s.length();

    set<string> st(dict.begin(), dict.end()); // C++98 friendly
    vector<bool> dp(n+1, false);

    dp[0] = true;

    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            if(dp[j] && st.find(s.substr(j, i-j)) != st.end()){
                dp[i] = true;
                break;
            }
        }
    }

    return dp[n];
}

int main(){
    string s = "ilikegfg";

    vector<string> dict;
    dict.push_back("i");
    dict.push_back("like");
    dict.push_back("gfg");

    cout << wordBreak(s, dict);
}
