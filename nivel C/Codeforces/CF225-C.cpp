#include <bits/stdc++.h>
using namespace std;
#define INF 1e9

int n, m, x, y;
vector<vector<vector<int>>> dp; // Tridimensional!
vector<pair<int, int>> colunas;

int cor_col(int i, int cor){
    return (cor == 0 ? n - colunas[i].first : n - colunas[i].second);
}

int fn(int i, int cor_ant, int grupo){
    if(i == m){
        if(grupo >= x && grupo <= y) return 0;
        return INF;
    }

    int &ref = dp[i][cor_ant][grupo];
    if(ref != -1) return ref;
    ref = 0;

    if(grupo < x){
        ref = cor_col(i, cor_ant) + fn(i + 1, cor_ant, grupo + 1);
    }
    else{
        if(cor_ant == 0){
            if(grupo + 1 <= y){
                int a = cor_col(i, 0) + fn(i + 1, 0, grupo + 1);
                int b = cor_col(i, 1) + fn(i + 1, 1, 1);
                ref = min(a, b);
            }
            else ref = cor_col(i, 1) + fn(i + 1, 1, 1);
        }
        else{
            if(grupo + 1 <= y){
                int a = cor_col(i, 0) + fn(i + 1, 0, 1);
                int b = cor_col(i, 1) + fn(i + 1, 1, grupo + 1);
                ref = min(a, b);
            }
            else ref = cor_col(i, 0) + fn(i + 1, 0, 1);
        }
    }

    return ref;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m >> x >> y;
    dp.resize(m + 5, vector<vector<int>>(2, vector<int>(y + 5, -1)));
    vector<string> codigo;

    for(int i = 0; i < n; i++){
        string l; cin >> l;
        codigo.push_back(l);
    }

    for(int j = 0; j < m; j++){
        int b = 0, p = 0;
        for(int i = 0; i < n; i++){
            if(codigo[i][j] == '#') p++;
            else b++;
        }
        colunas.push_back({b, p});
    }

    cout << min(fn(0, 0, 0), fn(0, 1, 0));
}