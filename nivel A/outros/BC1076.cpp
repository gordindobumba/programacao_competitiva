#include <bits/stdc++.h>
using namespace std;

#define N 55
bool visitado[N];

int res = 0;

void dfs(int s, vector<int> adj[]){
    if(visitado[s]) return;
    visitado[s] = true;
    for(auto u : adj[s]){
        res++;
        dfs(u, adj);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int mat[N][N] = {0};
        vector<int> adj[N];
        int n, v, a; cin >> n;
        cin >> v >> a;

        for(int i = 0; i < a; i++){
            int n1, n2; cin >> n1 >> n2;
            if(mat[n1][n2] == 1) continue;
            mat[n1][n2] = 1; mat[n2][n1] = 1;
            adj[n1].push_back(n2);
            adj[n2].push_back(n1);
        }

        dfs(n, adj);
        cout << res << '\n';
        res = 0;
        fill(visitado, visitado + N, false);
    }
}