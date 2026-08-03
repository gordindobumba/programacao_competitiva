#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m; cin >> n >> m;
    vector<set<int>> adj(n + 1);
    for(int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        adj[x].insert(y);
        adj[y].insert(x);
    }

    vector<int> group(n + 1);
    int q = 0;

    while(1){
        group.clear();

        for(int i = 1; i <= n; i++){
            if(adj[i].size() == 1){
                group.push_back(i);
            }
        }

        if(group.size() > 0){
            ++q;
            for(int x : group){
                auto it = adj[x].begin();
                adj[x].clear();
                adj[*it].erase(x);
            }
        }
        else break;
    }
    cout << q;
}