#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>

vector<int> dirs;
vector<vector<int>> adj;
vector<int> separados;

void bfs(int n){
    queue<int> q;
    priority_queue<pii> w;
    q.push(n);
    while(q.size()){
        int s = adj[q.front()].size();
        for(int i = 0; i < s; i++){
            int &ref = adj[q.front()][i];
            q.push(ref);
            w.push({dirs[ref], ref});
        }
        while(w.size() > 0){
            if(w.top().first >= dirs[q.front()]/2){
                separados.push_back(w.top().second);
                dirs[q.front()] -= w.top().first;
                w.pop();
            }
            else break;
        }
        w = priority_queue<pii>();
        q.pop();
    }
}

int dfs(int n){
    int s = adj[n].size();
    int valor = 0;
    for(int i = 0; i < s; i++){
        int node = adj[n][i];
        valor += dfs(node);
    }

    dirs[n] += valor;
    return dirs[n];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    dirs.resize(n + 1);
    adj.resize(n + 1);

    for(int i = 1; i <= n; i++){
        cin >> dirs[i];
    }

    for(int i = 0; i < n - 1; i++){
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
    }

    dfs(1);
    bfs(1);

    cout << separados.size() << '\n';
    sort(separados.begin(), separados.end());
    for(auto x : separados){
        cout << x << " ";
    }
}