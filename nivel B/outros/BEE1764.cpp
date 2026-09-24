#include <bits/stdc++.h>
using namespace std;

int prim(vector<vector<pair<int, int>>> adj){
    int n = (int)adj.size(), custo_min = 0;
    priority_queue<pair<int, int>> pq;
    vector<int> visitado(n, 0);
    visitado[0] = 1;

    for(auto x : adj[0]){
        pq.push({-x.second, x.first});
    }

    while(pq.size()){
        pair<int, int> ar = pq.top();
        pq.pop();

        if(visitado[ar.second]) continue;
        visitado[ar.second] = 1;
        custo_min += -ar.first;

        for(auto x : adj[ar.second]){
            pq.push({-x.second, x.first});
        }
    }

    return custo_min;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    while(cin >> n >> m && n){
        vector<vector<pair<int, int>>> adj(n);
        for(int i = 0; i < m; i++){
            int u, v, w;
            cin >> u >> v >> w;
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }

        cout << prim(adj) << '\n';
    }
}