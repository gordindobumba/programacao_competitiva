#include <bits/stdc++.h>
using namespace std;

vector<string> labirinto;
vector<vector<bool>> visitado;
int n;

bool valido(int i, int j){
    return i >= 0 && j >= 0 && i < n && j < n;
}

bool search(int r, int c){
    if(!valido(r, c) || labirinto[r][c] == 'X') return false;
    if(labirinto[r][c] == 'E') return true;
    
    if(visitado[r][c]) return false;
    visitado[r][c] = true;

    if(search(r + 1, c)) return true;
    if(search(r, c + 1)) return true;
    if(search(r - 1, c)) return true;
    if(search(r, c - 1)) return true;

    return false;
}

int main(){
    n = 4;

    labirinto.resize(n);
    labirinto[0] = "S.X.";
    labirinto[1] = "..XE";
    labirinto[2] = ".X..";
    labirinto[3] = "...X";

    int s_i = 0, s_j = 0;
    visitado.resize(n, vector<bool>(n, false));
    if(search(s_i, s_j)) printf("o rato chegou ao fim");
    else printf("o rato não chegou ao fim");
}