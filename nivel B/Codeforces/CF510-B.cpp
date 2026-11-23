#include <bits/stdc++.h>
using namespace std;

void test(){
    freopen("input.txt", "r", stdin);
    freopen("myout.txt", "w", stdout);
}

bool visitado[51][51];
char grid[51][51];
int n, m;
bool check;

bool valido(int i, int j){
    return i >= 0 && i < n && j >= 0 && j < m;
}

void dfs(char c, char vis, int i, int j){
    visitado[i][j] = true;
    if(valido(i + 1, j) && grid[i + 1][j] == c && vis != 'D'){
        if(visitado[i + 1][j]){
            check = true;
            return;
        }
        dfs(c, 'U', i + 1, j);
    }
    if(valido(i, j + 1) && grid[i][j + 1] == c && vis != 'L'){
        if(visitado[i][j + 1]){
            check = true;
            return;
        }
        dfs(c, 'R', i, j + 1);
    }
    if(valido(i - 1, j) && grid[i - 1][j] == c && vis != 'U'){
        if(visitado[i - 1][j]){
            check = true;
            return;
        }
        dfs(c, 'D', i - 1, j);
    }
    if(valido(i, j - 1) && grid[i][j - 1] == c && vis != 'R'){
        if(visitado[i][j - 1]){
            check = true;
            return;
        }
        dfs(c, 'L', i, j - 1);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(!visitado[i][j]){
                check = false;
                dfs(grid[i][j], 'n', i, j);
                if(check){
                    cout << "Yes";
                    return 0;
                }
            }
        }
    }

    cout << "No";
}