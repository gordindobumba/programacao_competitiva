#include <bits/stdc++.h>
using namespace std;

int main(){
    
    /* Busca pela metade (meet in the middle ou encontro no meio) é uma técnica onde o espaço onde será feita a busca
    é dividido ao meio, a busca é feita em cada metade, e depois os resultados são combinados */
    
    /* Típicamente, conseguimos transformar um algoritmo que tem complexidade O(2^n) em um algoritmo 
    de complexidade(2^(n/2)) quando essa técnica é aplicada. Isso acontece porque fazer busca em dois 
    espaços de tamanho n/2 é geralmente muito mais rápido do que fazer busca em um espaço de tamanho n */

    // Ex.: Verificar se, a partir dos números no conjunto {2, 4, 5, 9}, conseguimos uma soma que dê x = 15 sem repetir números
    // Nesse caso, podemos pegar 2 + 4 + 9 e gerar 15

    // Uma estratégia simples é pegar todos os subsets do conjunto e verificar se existe algum subset cuja soma seja igual a x
    // Essa estratégia tem complexidade O(2^n), já que um conjunto tem 2^n subsets
    // Porém, podemos usar a técnica de busca pela metade para melhorar a complexidade desse algoritmo

    
    // Faremos dois conjuntos A e B, onde A = {2, 4} e B = {5, 9}, as metades do conjunto original
    // Pegaremos todos os subsets de A e guardaremos a soma de cada um em uma lista S1
    // Faremos a mesma coisa com o conjunto B e guardaremos suas somas em uma lista S2

    // Ao guardar as somas, S1 = {0, 2, 4, 6} e S2 = {0, 5, 9, 14}
    // Agora, podemos combinar as somas e verificar se alguma delas iguala x
    // Nesse caso, sim, já que S1 tem 6 e S2 tem 9, e 6 + 9 = 15

    
    // Usando essa técnica, podemos criar um algoritmo que tem complexidade O(2^(n/2))
    // Primeiro, criamos listas *ordenadas* S1 e S2, que pode ser feito em tempo O(2^(n/2))
    // Após, como as listas estão ordenadas, podemos checar em tempo O(2^(n/2)) se S1 e S2 geram a soma x
}