#include <bits/stdc++.h>
using namespace std;

struct aresta{
    int a, b;
    double w;
};

struct DSU{
    vector<int> rank, pai;

    DSU(int n){
        rank.resize(n + 1);
        pai.resize(n + 1);
        for(int i = 1; i <= n; i++){
            rank[i] = 1;
            pai[i] = i;
        }
    }

    int achar(int x){
        return (x == pai[x] ? x : pai[x] = achar(pai[x]));
    }

    void juntar(int u, int v){
        if(rank[u] > rank[v]) swap(u, v);

        pai[u] = v;
        if(rank[u] == rank[v]) rank[v]++;
    }

    bool unir_conjuntos(int u, int v){
        u = achar(u);
        v = achar(v);
        if(u != v) juntar(u, v);
        return u != v;
    }
};

bool comp(aresta x, aresta y){
    return x.w < y.w;
}

double euclideano(int x1, int x2, int y1, int y2){
    return sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
}

aresta G[751 * 751];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    int d_x[751], d_y[751];
    while(t--){
        int n; cin >> n;
        DSU dsu(n);
        for(int i = 1; i <= n; i++){
            cin >> d_x[i] >> d_y[i];
        }
        
        int m, u, v; cin >> m;
        int arestas = 0;
        for(int i = 0; i < m; i++){
            cin >> u >> v;
            if(dsu.unir_conjuntos(u, v)) arestas++;
        }
        
        if(arestas == n - 1)
            cout << "No new highways need\n";
        else{
            int e = 0;
            for(int i = 1; i <= n; i++){
                for(int j = i + 1; j <= n; j++){
                    G[e].a = i;
                    G[e].b = j;
                    G[e].w = euclideano(d_x[i], d_x[j], d_y[i], d_y[j]);
                    e++;
                }
            }

            sort(G, G + e, comp);
            for(int i = 0; i < e; i++){
                if(dsu.unir_conjuntos(G[i].a, G[i].b))
                    cout << G[i].a << " " << G[i].b << '\n';
            }
        }
        
        if(t) cout << "\n";
    }
}