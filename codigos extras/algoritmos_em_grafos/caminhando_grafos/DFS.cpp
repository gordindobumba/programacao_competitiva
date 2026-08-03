#include <bits/stdc++.h>
using namespace std;

#define N 100

bool visitado[N];
vector<int> adj[N];

void dfs(int s){
    if(visitado[s]) return;
    visitado[s] = true;
    // insira operações no nó s aqui
    for(auto u : adj[s]){
        dfs(u);
    }
}

int main(){
    
    // O DFS (depth-first research ou busca em profundidade) é um algoritmo mais simples de caminho
    // Ele caminha para todos os nós alcançáveis a partir do nó inicial usando as arestas
    // Sempre percorre o mesmo caminho enquanto achar nós. Quando não acha mais, retrocede para um nó anterior e vai em outro caminho
    // O algoritmo lembra quais nós foram alcançados, para visitar cada nó somente uma vez

    // Sua complexidade é O(n + m), onde n é o número de nós e m é o número de arestas

    /*----IMPLEMENTAÇÃO----*/

    // Podemos usar recursão para o DFS. O algoritmo assume que usaremos listas de adjacência
    vector<int> adj[N];
    // E também usa um array para verificar se o nó já foi visitado ou não
    bool visitado[N];
    // Todos os valores começam falsos, já que nenhum nó foi visitado. Quando um nó é visitado, o valor relativo no array vira true
    // A função de implementação está na linha 6
}