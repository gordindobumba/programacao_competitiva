#include <bits/stdc++.h>
using namespace std;

char adj[10][10];
string path = "IEHOVA#";
int x[] = {-1, 0, 0};
int y[] = {0, -1, 1};
string dir[] = {"forth", "left", "right"};
vector<string> ans;
int m, n;

bool valido(int i, int j){ return i >= 0 && j >= 0 && i < n && j < m; }

void dfs(int i, int j, int k){
    if(k > (int)path.size()) return;
    for(int c = 0; c < 3; c++){
        int dx = i + x[c], dy = j + y[c];
        if(valido(dx, dy) and adj[dx][dy] == path[k]){
            ans.push_back(dir[c]);
            dfs(dx, dy, k + 1);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        pair<int, int> start;
        for(int i = 0 ; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> adj[i][j];
                if(adj[i][j] == '@') start = {i, j};
            }
        }

        ans.clear();
        dfs(start.first, start.second, 0);

        cout << ans[0];
        int s = ans.size();
        for(int i = 1; i < s; i++){
            cout << " " << ans[i];
        }
        cout << '\n';
    }
}