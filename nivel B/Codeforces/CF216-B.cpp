#include <bits/stdc++.h>
using namespace std;

#define N 105

bool visitado[N];
int cores[N];
vector<int> adj[N];
int res = 0;

void dfs(int s, int cor){
    if(visitado[s]) return;
    
    visitado[s] = true;
    cores[s] = cor;

    for(auto u : adj[s]){
        if(cores[u] == 0) dfs(u, 3 - cor);
        else if(cores[u] == cores[s]) res++;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, a, b; cin >> n >> m;

    for(int i = 0; i < m; i++){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for(int i = 1; i <= n; i++){
        if(!visitado[i] && !adj[i].empty())
            dfs(i, 1);
    }

    cout << ((n - res/2) % 2 == 0 ? res/2 : res/2 + 1);
}