#include <bits/stdc++.h>
using namespace std;

#define N 11 // Como x = 10, N = x + 1
#define INF 1e9
bool calculado[N];
int valor[N];
int moedas[3];

int moeda(int x){
    if(x < 0) return INF;
    if(x == 0) return 0;
    if(calculado[x]) return valor[x];
    int minimo = INF;
    for(auto m : moedas){
        minimo = min(minimo, moeda(x - m) + 1);
    }
    valor[x] = minimo;
    calculado[x] = true;
    return minimo;
}

int main(){

    /* Vamos tentar resolver o mesmo problema da moeda visto nos algoritmos gulosos, ou seja, dado um vetor de n moedas, 
    descubra qual o mínimo de moedas necessárias para conseguir um valor x */
    
    // O algoritmo guloso, enquanto eficiente para moedas européias, não garante uma solução ótima para qualquer vetor de moedas
    // Porém, com programação dinâmica, podemos resolver esse problema com eficiência para qualquer vetor de moedas

    
    // Um algoritmo dinâmico se baseia em um subproblema para resolver um problema maior, e memoriza os valores já calculados
    /* Nesse caso, como queremos descobrir o mínimo de moedas para um valor x, podemos resolver o subproblema:
    "qual o mínimo de moedas necessárias para obter um valor k qualquer?" */

    /* Por exemplo, se as moedas forem {1, 3, 4}, e quisermos descobrir o mínimo para x = 10, podemos descobrir o mínimo 
    para valores menores que 10 e usar recursão para descobrir o mínimo de moedas para obter 10 */

    // Podemos criar uma função moedas(x), que calcula o mínimo de moedas para um valor x
    // Como queremos que moedas(x) devolva a solução ótima, moedas(x - i) deve retornar um valor ótimo também
    /* Para moedas(10), se usarmos a primeira moeda, logo fica 1 + moedas(10 - 1) = 1 + moedas(9). Como queremos a solução ótima
    para x = 10, devemos também buscar a solução ótima para x = 9, criando o subproblema */

    // Logo, para as moedas {1, 3, 4}, podemos divir moedas(x) em três casos:
    //                 1 + moedas(x - 1)
    // moedas(x) -> ou 1 + moedas(x - 3)
    //              ou 1 + moedas(x - 4)

    // Para melhorar a eficiência do algoritmo, podemos prunar o algoritmo para que calcule cada caso somente uma vez e guarde o valor
    // Podemos aplicar recursividade ou iteratividade para resolver esse problema com PD

    // A função que calcula o mínimo recursivamente está na linha 10
    // Ela tem complexidade O(nk), onde n é a quantidade de moedas e k é o valor que queremos obter
    // Aqui está um algoritmo iterativo que faz a mesma coisa:

    int valor[N];
    int moedas[3];
    int n = 10;
    for(int x = 1; x <= n; x++){
        valor[x] = INF;
        for(auto m : moedas){
            if(x - m >= 0){
                valor[x] = min(valor[x], valor[x - m] + 1);
            }
        }
    }
    // Muitos programadores preferem escrever do jeito iterativo, já que é mais simples

    
    /* Criando uma solução */

    // Ás vezes, temos que tanto mostrar o mínimo de moedas para conseguir um valor quanto mostrar um exemplo da solução ótima
    // Para o problema da moeda, podemos criar um array que guarda a primeira moeda para cada quantidade de dinheiro
    int primeira[N];
    // E agora podemos modificar o algoritmo iterativo anterior
    valor[0] = 0;
    for (int x = 1; x <= n; x++) {
        valor[x] = INF;
        for (auto m : moedas) {
            if (x - m >= 0 && valor[x - m] + 1 < valor[x]) {
                valor[x] = valor[x - m] + 1;
                primeira[x] = m;
            }
        }
    }

    // E agora podemos imprimir a solução
    while (n > 0) {
        cout << primeira[n] << "\n";
        n -= primeira[n];
    }

    /* Quantidade de soluções */

    // Outra versão do problema da moeda pede a quantidade de formas de fazer um valor x
    // Por exemplo, se moedas = {1, 3, 4} e x = 5, existem 6 maneiras:
    // 1 + 1 + 1 + 1 + 1, 1 + 3 + 1, 1 + 1 + 3, 3 + 1 + 1, 4 + 1, 1 + 4

    // Podemos expressar esse problema de forma recursiva
    /* Se solucoes(x) for uma função que conta a quantidade de soluções 
    de um valor x, então solucoes(x) = solucoes(x - 1) + solucoes(x - 3) + solucoes(x - 4) */

    // Podemos fazer um algoritmo que resolve assim:
    // Se x < 0, não há solução, logo solucoes(x) = 0
    // Se x = 0, então há somente uma solução, que é usar nenhuma moeda, logo solucoes(x) = 1
    // Se x > 0, iremos calcular recursivamente, logo solucoes(x) = solucoes(x - m1) + solucoes(x - m2) + ... solucoes(x - mn)

    // Aqui está um algoritmo iterativo que resolve o problema

    int solucoes[N] = {0};
    solucoes[0] = 1;
    for(auto m : moedas){
        for(int x = m; x <= n; x++){
            solucoes[x] += solucoes[x - m];
        }
    }

    // Como a quantidade pode ser enorme, algumas questões oference um módulo para diminuir os resultados
    // Para aplicar, se considerarmos mod como o módulo, coloque solucoes[x] %= mod após a linha 114
}