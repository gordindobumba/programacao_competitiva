#include <bits/stdc++.h>
using namespace std;

#define N 305

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<tuple<int, int, int>> edges;
    int n, m; cin >> n >> m;

    for(int i = 0; i < m; i++){
        int a, b, w;
        cin >> a >> b >> w;
        edges.push_back({a, b, w});
        edges.push_back({b, a, w});
    }

    int start, end;
    cin >> start >> end;

    int distance[N];
    for(int i = 1; i <= n; i++) distance[i] = -1;
    distance[start] = 0;

    for(int i = 1; i <= n - 1; i++){
        for (auto e : edges){
            int a, b, w;
            tie(a, b, w) = e;
            distance[b] = min(distance[b], distance[a] + w);
        }
    }

    cout << distance[end];
}