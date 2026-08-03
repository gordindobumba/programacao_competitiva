#include <bits/stdc++.h>
using namespace std;

char adj[30][30];
int visitado[30][30];
int n;

bool valido(int i, int j){
    return i > -1 && j > -1 && i < n && j < n;
}

int x[8] = {0, 0, 1, -1, 1, 1, -1, -1};
int y[8] = {-1, 1, 0, 0, 1, -1, 1, -1};

void dfs(int i, int j){
    if(visitado[i][j]) return;
    visitado[i][j] = 1;
    for(int c = 0; c < 8; c++){
        int coord_x = x[c] + i;
        int coord_y = y[c] + j;
        if(valido(coord_x, coord_y) && !visitado[coord_x][coord_y] && adj[coord_x][coord_y] == '1'){
            dfs(coord_x, coord_y);
        }
    }
}

int main(){
    int t = 1;
    while(scanf("%d", &n) != EOF){
        for(int i = 0; i < n; i++){
            scanf("%s", adj[i]);
        }
        memset(visitado, 0, sizeof(visitado));
        int e = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(!visitado[i][j] && adj[i][j] == '1'){
                    dfs(i, j);
                    ++e;
                }
            }
        }

        printf("Image number %d contains %d war eagles.\n", t++, e);
    }
}