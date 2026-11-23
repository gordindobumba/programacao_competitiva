#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
    for(int i = 0; i < n; i++) dp[n][i] = 1;

    for(int i = n - 1; i >= 0; i--){
        for(int j = i; j >= 0; j--){
            if(i == j) dp[i][j] = dp[i + 1][j];
            else dp[i][j] = (dp[i + 1][j] + dp[i][j + 1]) % MOD;
        }
    }

    cout << dp[0][0];
}