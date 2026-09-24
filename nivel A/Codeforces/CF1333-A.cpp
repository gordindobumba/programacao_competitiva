#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        vector<vector<char>> v(n, vector<char>(m, 'B'));
        v[0][0] = 'W';
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout << v[i][j];
            }
            cout << '\n';
        }
    }
}