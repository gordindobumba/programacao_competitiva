#include <bits/stdc++.h>
using namespace std;

bool visitado[105][105] = {false};
char adj[105][105];
int res = 0;
int n, m;

bool valido(int i, int j){
    return i >= 0 && j >= 0 && i < n && j < m;
}

int x[] = {1, -1, 0, 0};
int y[] = {0, 0, 1, -1};

void dfs(char cor, int i, int j){
    if(visitado[i][j] == true || !valido(i, j)) return;
    visitado[i][j] = true;
    if(adj[i + 1][j] == cor) dfs(cor, i + 1, j);
    if(adj[i - 1][j] == cor) dfs(cor, i - 1, j);
    if(adj[i][j + 1] == cor) dfs(cor, i, j + 1);
    if(adj[i][j - 1] == cor) dfs(cor, i, j - 1);
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    char p_c; cin >> p_c;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> adj[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(adj[i][j] == p_c){
                for(int k = 0; k < 4; k++){
                    int d_x = i + x[k];
                    int d_y = j + y[k];
                    if(adj[d_x][d_y] != '.' && adj[d_x][d_y] != p_c && !visitado[d_x][d_y] && valido(d_x, d_y)){
                        res++;
                        dfs(adj[d_x][d_y], d_x, d_y);
                    }
                }
            }
        }
    }

    cout << res;
}