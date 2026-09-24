#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m; cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> v[i][j];
        }
    }

    int res = 0;
    for(int j = 0; j < m; j++){
        int x = 0;
        for(int i = 0; i < n; i++){
            x = max(x, v[i][j]);
        }
        res += x;
    }

    cout << res;
}