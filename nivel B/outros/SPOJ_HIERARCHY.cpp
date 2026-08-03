#include <bits/stdc++.h>
using namespace std;

#define N 100005
bool visitado[N];
int pai[N];
vector<vector<int>> adj;
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

    int n, k, w, a, posicao;
    cin >> n >> k;
    adj.resize(n + 1);

    for(int i = 1; i <= k; i++){
        cin >> w;
        for(int j = 0; j < w; j++){
            cin >> a;
            adj[i].push_back(a);
        }
    }

    for(int i = 1; i <= n; i++){
        if(!visitado[i]) top_sort(i);
    }

    posicao = 0;
    for(int i = n - 1; i >= 0; i--){
        int s = posicoes[i];
        pai[s] = posicao;
        posicao = s;
    }

    for(int i = 1; i <= n; i++){
        cout << pai[i] << '\n';
    }
}