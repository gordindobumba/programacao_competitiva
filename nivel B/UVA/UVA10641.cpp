#include <bits/stdc++.h>
using namespace std;

int BFS(int s, vector<vector<int>>& adj, vector<int>& weights){
    vector<bool> visited(weights.size(), 0);
    queue<int> q;
    q.push(s);
    int total = 0;

    while((int)q.size()){
        int node = q.front(); q.pop();

        for(int i = 0; i < (int)adj[node].size(); i++){
            int son = adj[node][i];
            if(!visited[son]){
                visited[son] = 1;
                q.push(son);
                total += weights[son];
            }
        }
    }

    return total;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int v, e, t = 1;
    while(cin >> v >> e && v | e){
        vector<vector<int>> adj(v + 1);
        vector<vector<int>> adj_inv(v + 1);
        vector<int> weights(v + 1);

        int total = 0;
        for(int i = 1; i <= v; i++){
            cin >> weights[i];
            total += weights[i];
        }

        for(int i = 0; i < e; i++){
            int x, y; cin >> x >> y;
            adj[y].push_back(x);
            adj_inv[x].push_back(y);
        }

        int q; cin >> q;
        cout << "Case #" << t++ << ":\n";
        while(q--){
            int s; cin >> s;
            int mini = BFS(s, adj, weights);
            int maxi = total - BFS(s, adj_inv, weights) - weights[s];

            cout << maxi - mini << "\n";
        }
        cout << '\n';
    }
}