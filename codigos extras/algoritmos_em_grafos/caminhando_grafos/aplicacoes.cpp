#include <bits/stdc++.h>
using namespace std;

int main(){

    // ---- Checar se um grafo é conexo

    // Podemos usar o BFS para checar se um grafo é conexo ou não
    // Se todos os elementos em visitado[N] forem true, então o grafo é conexo. Caso contrário, o grafo é disconexo
    // Também podemos achar todos os componentes conexos de um grafo, fazendo um BFS em nós que não foram visitados


    // ---- Encontrar ciclos

    // Um grafo contém um ciclo se um de seus vizinhos já foi visitado antes
    // Podemos usar BFS ou DFS para encontrar ciclos
    
    // Também podemos calcular quantos vértices e quantas arestas há num grafo
    // Se a quantidade de arestas for maior que n - 1, onde n é a qtd de vértices, então é garantido que haja pelo menos um ciclo


    // ---- Verificar se é bipartido

    // Podemos verificar se um grafo é bipartido, ou seja, pode ser dividido em dois grupos
    // A ideia é colorir o nó inicial azul, seus vizinhos de vermelho, e continuar alternando
    // Se em qualquer momento, dois nós vizinhos tiverem a mesma cor, o grafo não é bipartido

    /* Note que é difícil verificar para 3 ou mais cores, e se considerarmos k como a qtd de cores,
    verificar um grafo para k >= 3 é considerado um problema NP-completo */
}