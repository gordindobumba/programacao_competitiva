#include <bits/stdc++.h>
using namespace std;

char v[105][105];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m; cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> v[i][j];
        }
    }

    char p;
    for(int i = 0; i < n - 1; i++){
        p = v[i][0];
        for(int j = 1; j < m; j++){
            if(v[i][j] != p){
                cout << "NO";
                return 0;
            }
        }
        if(p == v[i + 1][0]){
            cout << "NO";
            return 0;
        }
    }

    p = v[n - 1][0];
    for(int j = 1; j < m; j++){
        if(v[n - 1][j] != p){
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
}