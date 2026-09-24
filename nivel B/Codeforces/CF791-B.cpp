#include <bits/stdc++.h>
using namespace std;

const int N = 150005;
vector<int> adj[N];
bool visitado[N];
long long x, y;

void dfs(int u){
    visitado[u] = true;
    x++;

    for(auto v : adj[u]){
        y++;
        if(!visitado[v]) dfs(v);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m; cin >> n >> m;
    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    bool v = true;
    for(int i = 1; i <= n; i++){
        if(!visitado[i]){
            x = 0; y = 0;
            dfs(i);
            if((y/2) != (x * (x - 1))/2){
                v = false;
                break;
            }
        }
    }

    cout << (v ? "YES" : "NO");
}