#include <bits/stdc++.h>
using namespace std;

const int N = 101;
vector<pair<int, int>> adj[N];
vector<int> visitado;
set<int> res;

void dfs(int s, int col, int obj){
    if(s == obj){
        res.insert(col);
        return;
    }

    if(visitado[s]) return;
    visitado[s] = 1;

    for(int i = 0; i < (int)adj[s].size(); i++){
        if(adj[s][i].second == col)
            dfs(adj[s][i].first, col, obj);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m; cin >> n >> m;
    visitado.resize(n + 1);
    for(int i = 0; i < m; i++){
        int a, b, c; cin >> a >> b >> c;
        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }

    int q; cin >> q;
    while(q--){
        res.clear();
        int x, y; cin >> x >> y;
        for(int i = 0; i < (int)adj[x].size(); i++){
            fill(visitado.begin(), visitado.end(), 0);
            visitado[x] = 1;
            dfs(adj[x][i].first, adj[x][i].second, y);
        }
        
        cout << res.size() << '\n';
    }
}