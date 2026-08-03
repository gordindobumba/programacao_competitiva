#include <bits/stdc++.h>
using namespace std;

# define N 5

int main(){

    /* O nosso próximo problema é tentar achar um caminho em uma grade n x n cheia de números positivos que 
    começe do canto superior esquerdo e termine no canto inferior direito, tal que ele apenas vá para baixo 
    e para a esquerda, e que a soma dos números no caminho seja a maior possível */

    // Por exemplo:
    // -> 3 2 5 6
    //    7 4 8 1
    //    6 3 4 7
    //    1 9 2 3 <-
    
    // Assuma que as linhas e colunas são numeradas de 1 a n, e valor[y][x] é o valor da célula (y, x)
    // Permita soma(y, x) ser o máximo da soma em um caminho que vai do canto superior esquerdo até (y, x)
    // soma(n, n) dará o maior caminho até o canto inferior direito
    
    // Podemos calcular a solução recursivamente:
    // soma(y, x) = max(soma(y - 1, x), soma(y, x - 1)) + valor[y][x]
    // Já que o caminho só pode ir para baixo ou para a esquerda, usamos (y - 1, x) e (y, x - 1)
    /* Essa é a subestrutura ótima, já que, para ser o melhor caminho até (y, x), o caminhos até (y, x - 1) ou (y - 1, x) 
    deve também ser o melhor caminho */
    // Iremos assumir que, se soma(y, x) = 0, então y = 0 e x = 0

    // Já que a função recebe dois parâmetros, o array de PD deve ser bidimensional
    int valor[N][N];
    int soma[N][N];
    // Podemos calcular da seguinte forma:
    for(int y = 1; y <= N; y++){
        for(int x = 1; x <= N; x++){
            soma[y][x] = max(soma[y - 1][x], soma[y][x - 1]) + valor[y][x];
        }
    }
    // A complexidade desse algoritmo é O(n^2)

}