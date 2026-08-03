#include <bits/stdc++.h>
using namespace std;

#define N 100

int main(){
    
    /* Listas de adjacência */

    // A forma mais comum de representar um grafo em C++ é usando listas de adjacência
    vector<int> adj[N];
    // 1 -> 2 -> 3
    // ^    |    |
    // |    |    |
    // |    v    |
    // L--- 4 <--⅃
    // Esse grafo pode ser representado assim
    adj[1].push_back(2);
    adj[2].push_back(3);
    adj[2].push_back(4);
    adj[3].push_back(4);
    adj[4].push_back(1);
    // Ele pode ser representado assim:
    // 1 -> 2 -> /
    // 2 -> 3 -> 4 -> /
    // 3 -> 4 -> /
    // 4 -> 1 -> /
    
    // Se for um grafo não-direcionado, adicione uma conexão para ambos os vértices
    // Podemos criar um grafo ponderado com vector<pair<int, int>>, adicionando elementos no formato {a, w} onde w é o peso da aresta

    // Através dessas listas, podemos fazer um loop que caminha por todos os vértices conectados a um vértice s
    int s;
    for(auto u : adj[s]){
        // recebe nó u
    }


    /* Matriz de adjacências */

    // Também uma estrutura bem comum para representar grafos, usando um array bidimensional
    int adj[N][N];
    // Se um vértice A estiver conectado a um vértice B, adj[A][B] = 1. Senão, adj[A][B] = 0
    // Efetivo para verificar se dois vértices são adjacentes

    // O grafo anterior pode ser representado assim:
    //     1 2 3 4
    //     _______
    // 1  |0 1 0 0
    // 2  |0 0 1 1
    // 3  |0 0 0 1
    // 4  |1 0 0 0
    // Se o grafo tiver pesos, cada 1 será trocado pelo peso de sua respectiva aresta
    
    // O problema dessa representação é que a matriz irá contér n^2 elementos, geralmente com a maioria deles sendo zeros
    // Logo, seu uso é evitado para grafos grandes


    /* Lista de arestas */

    // Uma lista de arestas contém todas as arestas do grafo em qualquer ordem
    // Forma conveniente de representar um grafo se não for preciso achar arestas que começam de um nó específico
    vector<pair<int, int>> edges;
    // Cada par {a, b} representa uma aresta que conecta a e b
    // O grafo anterior pode ser descrito assim:
    edges.push_back({1, 2});
    edges.push_back({2, 3});
    edges.push_back({2, 4});
    edges.push_back({3, 4});
    edges.push_back({4, 1});
    // Se for um grafo com pesos, troque pair<int, int> por tuple<int, int, int> onde o terceiro int é o peso da aresta
}