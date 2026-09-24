#include <bits/stdc++.h>
using namespace std;

const int INF = 0x3f3f3f3f;
typedef tuple<int, int, int> aresta;
typedef vector<int> vi;
#define de(a) get<0>(a)
#define para(a) get<1>(a)
#define peso(a) get<2>(a)

/*

Idéia:
- Adicionar um nó qualquer à árvore
- Enquanto ainda estiver faltando vértices na árvore, adicionar a aresta de menor peso e seu vértice, evitando ciclos
- Usando uma estratégia gulosa, a solução ótima é garantida

*/

int prim(vector<vector<pair<int, int>>> adj){ // Irá retornar o valor da árvore geradora mínima
    int n = (int)adj.size(), custo_min = 0;
    priority_queue<pair<int, int>> pq;
    vi visitado(n, 0);
    visitado[0] = 1;

    for(auto x : adj[0]){
        pq.push({-x.second, x.first});
    }

    while(pq.size()){
        pair<int, int> ar = pq.top();
        pq.pop();

        if(visitado[ar.second]) continue;
        visitado[ar.second] = 1;
        custo_min += -ar.first;

        for(auto x : adj[ar.second]){
            pq.push({-x.second, x.first});
        }
    }

    return custo_min;
}

pair<int, vector<aresta>> prim_e_arv(vector<vector<aresta>> adj){ // Irá retornar o custo mínimo e a árvore geradora mínima
    int n = (int)adj.size(), custo_min = 0;
    vi visitado(n, 0);
    vector<aresta> arestas;

    priority_queue<aresta> pq;
    pq.push({-1, 0, 0});

    while(pq.size()){
        aresta a = pq.top();
        pq.pop();

        if(visitado[para(a)]) return;
        para(a) = 1;
        custo_min += peso(a);
        if(para(a)) arestas.push_back(a); // Para ignorar o primeiro nó

        for(int j = 0; j < (int)adj[para(a)].size(); j++){
            aresta a2 = adj[para(a)][j];
            if(!visitado[para(a2)])
                pq.push(a2);
        }
    }

    if((int)arestas.size() != n - 1) return {-INF, vector<aresta>()};
    return {custo_min, arestas};
}