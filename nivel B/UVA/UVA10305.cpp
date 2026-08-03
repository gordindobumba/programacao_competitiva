#include <bits/stdc++.h>
using namespace std;

#define N 105
bool visitado[N];
vector<vector<int>> adj(150);
vector<int> posicoes;

void top_sort(int s){
    visitado[s] = true;
    for(int i = 0; i < (int)adj[s].size(); i++){
        int filho = adj[s][i];
        if(!visitado[filho]) top_sort(filho);
    }
    posicoes.push_back(s);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, x, y;
    while(cin >> n >> m && n != 0){
        for(int i = 0; i < m; i++){
            cin >> x >> y;
            adj[x].push_back(y);
        }

        for(int i = 1; i <= n; i++){
            if(!visitado[i]) top_sort(i);
        }

        for(int i = n - 1; i >= 0; i--){
            cout << posicoes[i] << " ";
        }
        cout << '\n';

        memset(visitado, false, sizeof(visitado));
        posicoes.clear();
        adj.clear();
    }
}