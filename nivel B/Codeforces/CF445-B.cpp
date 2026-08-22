#include <bits/stdc++.h>
using namespace std;

const int N = 51;
vector<int> adj[N];
vector<int> visitado(N, 0);

long long bfs(int s){
    queue<int> q;
    q.push(s);
    long long nos = 1;
    while(q.size()){
        int n = q.front();
        for(int i = 0; i < (int)adj[n].size(); i++){
            if(visitado[adj[n][i]] == 0){
                visitado[adj[n][i]] = 1;
                q.push(adj[n][i]);
                nos *= 2;
            }
        }
        q.pop();
    }
    return nos;
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

    long long res = 1, nos = 1;
    for(int i = 1; i <= n; i++){
        if(!visitado[i]){
            visitado[i] = 1;
            nos = bfs(i);
        }
        res *= nos;
        nos = 1;
    }

    cout << res;
}