#include <bits/stdc++.h>
using namespace std;

// Uma função é considerada recursiva se chama a si mesma com um valor menor (sub-problema).
// A estrutura geralmente é:
/*
    funcao(valor):
        if(condicao) // caso base
        
        do(alguma_coisa) // lógica da função

        funcao(valor_menor) // chamada a si mesmo
*/

int fatorial(int n){
    if(n == 0) return 1;
    return n * fatorial(n - 1);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", fatorial(n));
}