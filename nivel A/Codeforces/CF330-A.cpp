#include <bits/stdc++.h>
using namespace std;

char v[11][11];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int r, c; cin >> r >> c;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> v[i][j];
        }
    }

    vector<vector<int>> v2(r + 1, vector<int>(c + 1, 0));

    bool check;
    for(int i = 0; i < r; i++){
        check = true;
        for(int j = 0; j < c; j++){
            if(v[i][j] == 'S') check = false;
        }
        if(check)
            for(int j = 0; j < c; j++){
                v2[i][j] = 1;
            }
    }

    for(int i = 0; i < c; i++){
        check = true;
        for(int j = 0; j < r; j++){
            if(v[j][i] == 'S') check = false;
        }
        if(check)
            for(int j = 0; j < r; j++){
                v2[j][i] = 1;
            }
    }

    int res = 0;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            res += v2[i][j];
        }
    }

    cout << res;
}