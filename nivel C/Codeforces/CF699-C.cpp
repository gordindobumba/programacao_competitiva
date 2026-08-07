#include <bits/stdc++.h>
using namespace std;
#define INF 1e5

int n;
vector<vector<int>> dp(105, vector<int>(3, -1));

int min_rest(vector<int>& days, int i, int last){
    if(i == n) return 0;

    int &ref = dp[i][last];
    if(ref != -1) return ref;

    if(days[i] == 0) ref = min_rest(days, i + 1, 0) + 1;
    else if(days[i] == 1){
        if(last == 1) ref = min_rest(days, i + 1, 0) + 1;
        else ref = min_rest(days, i + 1, 1);
    }
    else if(days[i] == 2){
        if(last == 2) ref = min_rest(days, i + 1, 0) + 1;
        else ref = min_rest(days, i + 1, 2);
    }
    else{
        int a = last == 2 ? INF : min_rest(days, i + 1, 2);
        int b = last == 1 ? INF : min_rest(days, i + 1, 1);
        ref = min(a, b);
    }

    return ref;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    vector<int> days(n);
    for(int i = 0; i < n; i++){
        cin >> days[i];
    }

    cout << min_rest(days, 0, 0);
}