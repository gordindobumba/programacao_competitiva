#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m; cin >> n >> m;
    queue<int> q;
    q.push(n);
    vector<int> v(20001, -1);
    v[n] = 0;

    while(!q.empty()){
        int u = q.front();
        q.pop();

        if(u == m){
            cout << v[u];
            break;
        }
    
        int p = u * 2;
        if(p <= 20000 && v[p] == -1){
            v[p] = v[u] + 1;
            q.push(p);
        }

        int s = u - 1;
        if(s >= 0 && v[s] == -1){
            v[s] = v[u] + 1;
            q.push(s);
        }
    }
}

// complexidade: O(n + m)