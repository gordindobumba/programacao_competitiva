#include <bits/stdc++.h>
using namespace std;

#define n 4
int coluna[n] = {0};
int diagonal1[2*n - 1] = {0};
int diagonal2[2*n - 1] = {0};
int solucoes = 0;

int search(int y){
    if(y == n){
        solucoes++;
        return;
    }
    for(int x = 0; x < n; x++){
        if(coluna[x] || diagonal1[x + y] || diagonal2[x - y + n - 1]) continue;
        coluna[x] = diagonal1[x + y] = diagonal2[x - y + n - 1] = 1;
        search(y + 1);
        coluna[x] = diagonal1[x + y] = diagonal2[x - y + n - 1] = 0;
    }
}

int main(){
    
    // Backtracking começa com uma solução vazia e a aumenta passo-a-passo
    // A busca passa recursivamente por todas as maneiras que a solução pode ser construída
    
    // Um exemplo é calcular a quantidade de maneiras de colocar n raínhas em um tabuleiro n x n
    // Por exemplo, para n = 4, só há duas soluções:

    // 0 1 0 0      0 0 1 0
    // 0 0 0 1      1 0 0 0
    // 1 0 0 0  ou  0 0 0 1
    // 0 0 1 0      0 1 0 0
    
    // Podemos resolver o problema usando backtracking, colocando as raínhas no tabuleiro linha por linha
    // Especificamente, colocamos uma raínha em uma posição de uma linha e testamos se conseguimos colocar outra na próxima linha

    // O algoritmo está na linha 10 (para começar a busca, chame search(0))
    // Ele se torna lento quando n aumenta, pois as soluções crescem exponencialmente
}