#include <bits/stdc++.h>
using namespace std;

#define INF (1e9 + 7)

void dp(){
    int n; cin >> n;

        string table[2];
        cin >> table[0] >> table[1];

        vector<int> dp(n + 1, INF);
        dp[0] = 0;
        for(int i = 0; i < n; i++){
            dp[i + 1] = min(dp[i + 1], dp[i] + (table[0][i] != table[1][i]));
            if(i + 1 < n){
                dp[i + 2] = min(dp[i + 2], dp[i] + (table[0][i] != table[0][i + 1]) + (table[1][i] != table[1][i + 1]));
            }
        }

    
    cout << dp[n] << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        dp();
    }
}