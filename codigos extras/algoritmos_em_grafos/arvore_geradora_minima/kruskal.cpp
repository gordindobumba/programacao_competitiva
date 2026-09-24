#include <bits/stdc++.h>
using namespace std;

const int INF = 0x3f3f3f3f;
struct aresta{
    int a, b, w;
}ar;

struct DSU{
    vector<int> rank, pai;
    int florestas;

    DSU(int n){
        rank.resize(n);
        pai.resize(n);
        florestas = n;
        for(int i = 0; i < n; i++){
            rank[i] = 1;
            pai[i] = i;
        }
    }

    int achar(int x){
        return (x == pai[x] ? x : achar(pai[x]));
    }

    void juntar(int u, int v){
        if(rank[u] > rank[v]) swap(u, v);

        pai[u] = v;
        if(rank[u] == rank[v]) rank[v]++;
    }

    bool unir_conjuntos(int u, int v){
        u = achar(u);
        v = achar(v);
        if(u != v){
            juntar(u, v);
            florestas--;
        }
        return u != v;
    }

    vector<vector<int>> componentes_conectados(){
        int n = pai.size();
        vector<vector<int>> componentes(n);
        for(int i = 0; i < n; i++){
            componentes[achar(i)].push_back(i);
        }
    }
};

pair<int, vector<aresta>> kruskal(vector<aresta> adj, int n){
    DSU dsu(n);
    vector<aresta> arestas;
    int custo_min = 0;

    priority_queue<aresta> pq;
    for(int i = 0; i < n; i++) pq.push(adj[i]);

    while(pq.size()){
        aresta ar = pq.top();
        pq.pop();

        if(dsu.unir_conjuntos(ar.a, ar.b)){
            custo_min += ar.w;
            arestas.push_back(ar);
        }
    }

    if((int)arestas.size() != n - 1) return {-INF, vector<aresta>()};
    return {custo_min, arestas};
}