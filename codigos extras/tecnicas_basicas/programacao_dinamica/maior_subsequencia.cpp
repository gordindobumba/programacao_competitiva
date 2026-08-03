#include <bits/stdc++.h>
using namespace std;

int main(){

    /* Nesse problema, recebemos um vetor A de n números e temos que achar a maior subsequência crescente, ou seja, 
    a maior sequência crescente da esquerda pra direita que permite pulos entre números */
    // Por exemplo: 6 2 5 1 7 4 8 3
    // Nesse caso, a maior subsequência é 4:
    // 6 2 5 1 7 4 8 3  -> 2 5 7 8
    //   ^ ^   ^   ^
    //   | |   |   |

    // Permita tamanho(k) ser o tamanho de uma subsequência que termina em e inclui A[k]
    // Se calcularmos tamanho(k) para todos os k onde 0 <= k <= n - 1, obteremos o tamanho da maior subsequência
    // Por exemplo, os valores da função no array são:
    // tamanho(0) = 1
    // tamanho(1) = 1
    // tamanho(2) = 2
    // tamanho(3) = 1
    // tamanho(4) = 3
    // tamanho(5) = 2
    // tamanho(6) = 4
    // tamanho(7) = 2
    // E o maior tamanho é tamanho(6) = 4, já que a maior subsequência que termina em A[6] tem 4 elementos

    // Para calcular tamanho(k), temos que achar uma posição i tal que i < k, A[i] < A[k], e tamanho(i) seja o maior possível
    // Se os requisitos forem todos verdadeiros, tamanho(k) = tamanho(i) + 1
    // Porém, se não existe tal posição i, então tamanho(k) = 1, ou seja, é uma subsequência somente com A[k]
    
    // Já que todos os valores da função podem ser calculados a partir de valores menores já calculados, podemos usar PD
    // Aqui está um algoritmo que resolve esse problema
    
    int A[] = {6, 2, 5, 1, 7, 4, 8, 3};
    int n = 8;
    int tamanho[n];
    for(int k = 0; k < n; k++){
        tamanho[k] = 1;
        for(int i = 0; i < k; i++){
            if(A[i] < A[k]) tamanho[k] = max(tamanho[k], tamanho[i] + 1);
        }
    }
    // Esse algoritmo tem complexidade O(n^2), já que usa loops aninhados
    // Porém, podemos modificar esse algoritmo para ter complexidade O(n log n)

    // Usaremos uma estratégia chamada "Patience Sorting" (ordenação de Paciência)
    /* Como funciona:
        - Criaremos pilhas ordenadas de números, onde o número de cima é sempre menor que o número de baixo em cada pilha
        - Iremos fazer comparação com cada número do vetor, indo da esquerda para a direita
        - Se o número for menor que o menor número na pilha, ele é adicionado à pilha
        - Senão, outra pilha é criada com o número no topo
        - No final, a quantidade de pilhas será igual ao tamanho da maior subsequência
    */

    /* Exemplo:
        // A = 6 2 5 3 4
        // - Como não há nenhuma pilha, criaremos uma pilha com o número 6
        // 6
        
        // - 2 é menor que 6, logo ele será adicionado à mesma pilha com o 6
        // 2
        // 6
        
        // - 5 é maior que 2, logo criaremos uma nova pilha para conter o 5
        // 2  5 
        // 6
        
        // - 3 é maior que 2 mas menor que 5, então vai na pilha com o 5
        // 2  3
        // 6  5
        
        // - 4 é maior que 2 e 3, logo criaremos uma nova pilha para conter o 4
        // 2  3  4
        // 6  5
        
        // Como existem 3 pilhas, logo a maior subsequência tem tamanho 3
    */
    
    /* Como só precisamos do tamanho da subsequência e não da subsequência em si, podemos substituir o topo
    de cada pilha pelo número que for menor que o topo */

    vector<int> pilhas;
    for(int k = 0; k < n; k++){
        int x = A[k];
        auto it = lower_bound(pilhas.begin(), pilhas.end(), x);
        if(it == pilhas.end()) pilhas.push_back(x);
        else *it = x;
    }
}