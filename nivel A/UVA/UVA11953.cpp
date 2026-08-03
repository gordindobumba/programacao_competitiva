#include <bits/stdc++.h>
using namespace std;

int n;

bool valido(int i, int j){
    return i >= 0 && j >= 0 && i < n && j < n;
}

char adj[105][105];
bool visitado[105][105];

void dfs(int i, int j){
    if(!valido(i, j)) return;
    if(adj[i][j] == '.' || visitado[i][j]) return;
    visitado[i][j] = true;
    dfs(i, j + 1);
    dfs(i, j - 1);
    dfs(i + 1, j);
    dfs(i - 1, j);
}

int main(){
    int t, b;
    scanf("%d", &t);
    for(int T = 1; T <= t; T++){
        b = 0;
        memset(visitado, false, sizeof(visitado));
        scanf("%d", &n);

        for(int i = 0; i < n; i++){
            scanf("\n");
            for(int j = 0; j < n; j++){
                scanf("%c", &adj[i][j]);
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(!visitado[i][j] && adj[i][j] == 'x'){
                    b++;
                    dfs(i, j);
                }
            }
        }

        printf("Case %d: %d\n", T, b);
    }
}