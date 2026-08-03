#include <bits/stdc++.h>
using namespace std;

int main(){
    
    // Dado um vetor de pesos w = {w1, w2, ... , wn}, determine todas as somas que podem ser feitas a partir dos pesos
    // Por exemplo, se w = {1, 3, 3, 5}:
    // 0 1 2 3 4 5 6 7 8 9 10 11 12
    // X X   X X X X X X X    X  X
    // Como é possível ver, é possível fazer todas as somas de 0 até 12, exceto por 2 e 10

    // Para resolver o problema, focaremos no subproblema de usar somente os k primeiros pesos para fazer as somas
    // Permita possivel(x, k) ser a função que determina se é possível somar a x usando k pesos
    // Se for possível, possivel(x, k) = true, senão, possivel(x, k) = false

    // Podemos realizar a função de forma recursiva:
    // possivel(x, k) = possivel(x - w[k], k - 1) || possivel(x, k - 1)
    // Essa recursão se baseia no fato de que podemos usar ou não usar o peso w[k] para realizar a soma de x
    // Se usarmos o peso w[k], então agora temos que verificar se conseguimos realizar a soma x - w[k] com um peso a menos
    // Senão, só teremos que verificar a soma x com um peso a menos

    // Para o caso base:
    // possivel(x, 0) = true se x = 0, false se x != 0
    // Após calcular todos os valores, possivel(x, k) determina se conseguimos realizar uma soma x usando todos os pesos

    // Permita W ser a soma dos pesos
    // O seguinte algoritmo de complexidade O(nW) corresponde à função recursiva:

    int w[] = {1, 3, 3, 5};
    int n = 4;
    int W = 1 + 3 + 3 + 5;
    bool possivel[W + 1][n + 1];

    possivel[0][0] = 0;
    for(int k = 1; k <= n; k++){
        for(int x = 0; x <= W; x++){
            if(x - w[k] >= 0) possivel[x][k] |= possivel[x - w[k]][k - 1];
            else possivel[x][k] |= possivel[x][k - 1];
        }
    }

    // Porém, aqui está uma implementação melhor que usa somente um array unidimensional possivel[x]
    // O truque é que esse atualiza o array da direita para a esquerda
    bool possivel_[W + 1];
    possivel_[0] = true;
    for(int k = 1; k <= n; k++){
        for(int x = W; x >= 0; x--){
            if(possivel_[x]) possivel_[x + w[k]] = true;
        }
    }

}