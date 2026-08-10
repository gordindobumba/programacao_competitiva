#include <bits/stdc++.h>
using namespace std;

vector<vector<bool>> visitado;
vector<string> territorio;
int terra = 0;
int n, m;
int d_x[4] = {0, 0, 1, -1};
int d_y[4] = {1, -1, 0, 0};
char t_c;

bool valido(int i){
    return i >= 0 && i < n;
}

int ajuste(int j){
    if(j >= m) return 0;
    if(j < 0) return m - 1;
    return j;
}

void dfs(int i, int j){
    visitado[i][j] = true;
    terra++;

    for(int c = 0; c < 4; c++){
        int x = i + d_x[c];
        int y = ajuste(j + d_y[c]);
        if(valido(x) && !visitado[x][y] && territorio[x][y] == t_c)
            dfs(x, y);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    while(cin >> n >> m){
        for(int i = 0; i < n; i++){
            string l; cin >> l;
            territorio.push_back(l);
        }

        visitado.resize(n, vector<bool>(m, false));

        int x, y; cin >> x >> y;
        t_c = territorio[x][y];
        dfs(x, y);

        int best = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(!visitado[i][j] && territorio[i][j] == t_c){
                    terra = 0;
                    dfs(i, j);
                    best = max(best, terra);
                }
            }
        }

        cout << best << '\n';
        territorio.clear();
        visitado.clear();
    }
}