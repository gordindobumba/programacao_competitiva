#include <bits/stdc++.h>
using namespace std;

int main(){

    // Pruning é o processo de "aparar" um algoritmo de backtracking para que perceba logo que uma solução não é ótima
    // É chamado assim porque backtracking gera uma árvore recursiva que pode ter uma enorme quantidade de folhas
    // Essa otimização pode ter um significante efeito na eficiência do algoritmo

    /* Vamos tentar resolver o problema de contar a quantidade de caminhos em uma grade n x n
    que começam no canto superior esquerdo e terminam no canto inferior direito, tal que visitem
    todas as células da grade */
    // Faremos usando uma grade 7x7, e iremos considerar um computador que faz cerca de 100 milhões de operações por segundo

    // v > > > v > v
    // v ^ < < v ^ v
    // > > v ^ > ^ v
    // v < < ^ < < v
    // v > > > v ^ v
    // v ^ < < v ^ v
    // > > > ^ > ^ v

    /*---NENHUMA OTIMIZAÇÃO---*/

    // O algoritmo básico não faz otimização, somente faz backtracking para checar todas as possibilidades possíveis
    // Tempo: 483 segundos
    // Chamadas recursivas: 76 bilhões

    
    /*---OTIMIZAÇÃO 1---*/

    // Somente iremos para baixo e para esquerda, pois cada solução correta tem uma versão simétrica que também é correta
    // Dessa forma, só teremos que obter metade das soluções
    // Tempo: 244 segundos
    // Chamadas recursivas: 38 bilhões


    /*---OTIMIZAÇÃO 2---*/

    // Se um caminho chegar ao canto inferior direito antes de alcançar todas as outras células, então não é uma solução
    // Se isso ocorrer, podemos parar a busca imediatamente e voltar para a célula anterior
    // Tempo: 119 segundos
    // Chamadas recursivas: 20 bilhões


    /*---OTIMIZAÇÃO 3---*/

    /* Se um caminho alcançar uma parede e puder ir pra esquerda ou direita, ela divide a grade em dois e 
    não consegue mais alcançar todas as células da grade */
    // Ex.:

    // v 0 ^ 0
    // v 0 ^ 0   <- Agora é impossível alcançar todas as células sem se cruzar
    // v 0 ^ 0
    // > > ^ 0

    // Se isso acontecer, podemos parar a busca imediatamente e voltar para a célula anterior
    // Tempo: 1.8 segundos
    // Chamadas recursivas: 221 milhões

    
    /*---OTIMIZAÇÃO 4---*/
    /* Podemos generalizar a otimização anterior para qualquer momento onde o caminho não pode ir para a frente
    mas pode ir para a esquerda ou direita */
    // Ex.:

    // v 0 0 0
    // v < < 0   <- Agora é impossível alcançar todas as células sem se cruzar
    // v 0 ^ 0
    // > > ^ 0

    // Tempo: 0.6 segundos
    // Chamadas recursivas: 69 milhões

    
    // Como podemos ver, através de pruning, fomos de 483 segundos para 0.6 segundos
    /* Isso é normal em backtracking, já que as árvores recursivas geradas podem ser enormes, e até
    simples mudanças podem trazer grandes otimizações */
    // Especialmente, as mais úteis são otimizações feitas logo no início, que afetam as primeiras chamadas recursivas

}