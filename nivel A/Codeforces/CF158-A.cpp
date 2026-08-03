#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, k; cin >> n >> k;
    vector<int> scores(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> scores[i];
    }

    int i = k;

    if(scores[k] > 0) while(scores[i + 1] == scores[k] && i <= n) i++;
    else while(scores[i] <= 0 && i >= 1) i--;
    cout << i;
}