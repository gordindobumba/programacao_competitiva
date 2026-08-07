#include <bits/stdc++.h>
using namespace std;

# define N 5

int main(){

    /* O nosso próximo problema é tentar achar um caminho em uma grade n y n cheia de números positivos que 
    começe do canto superior esquerdo e termine no canto inferior direito, tal que ele apenas vá para baixo 
    e para a esquerda, e que a soma dos números no caminho seja a maior possível */

    // Por exemplo:
    // -> 3 2 5 6
    //    7 4 8 1
    //    6 3 4 7
    //    1 9 2 3 <-
    
    // Assuma que as linhas e colunas são numeradas de 1 a n, e valor[x][y] é o valor da célula (x, y)
    // Permita soma(x, y) ser o máximo da soma em um caminho que vai do canto superior esquerdo até (x, y)
    // soma(n, n) dará o maior caminho até o canto inferior direito
    
    // Podemos calcular a solução recursivamente:
    // soma(x, y) = max(soma(x - 1, y), soma(x, y - 1)) + valor[x][y]
    // Já que o caminho só pode ir para baixo ou para a esquerda, usamos (x - 1, y) e (x, y - 1)
    /* Essa é a subestrutura ótima, já que, para ser o melhor caminho até (x, y), o caminhos até (x, y - 1) ou (x - 1, y) 
    deve também ser o melhor caminho */
    // Iremos assumir que, se soma(x, y) = 0, então x = 0 e y = 0

    // Já que a função recebe dois parâmetros, o array de PD deve ser bidimensional
    int valor[N][N];
    int soma[N][N];
    // Podemos calcular da seguinte forma:
    for(int x = 1; x <= N; x++){
        for(int y = 1; y <= N; y++){
            soma[x][y] = max(soma[x - 1][y], soma[x][y - 1]) + valor[x][y];
        }
    }
    // A complexidade desse algoritmo é O(n^2)

}