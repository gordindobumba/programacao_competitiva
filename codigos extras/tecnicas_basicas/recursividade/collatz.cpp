#include <bits/stdc++.h>
using namespace std;

// Conjectura de Collatz
// Se n for par, retornar n/2
// Se n for ímpar, retornar 3*n + 1
// Não se sabe, até hoje, se todo número inteiro chega ou não a 1

void collatz(int n){
    printf("%d ", n);

    if(n == 1) return;
    
    if(n % 2 == 0) collatz(n/2);
    else collatz(3*n + 1);
}

int tamanho_collatz(int n){
    if(n == 1) return 1;

    if(n % 2 == 0) return 1 + tamanho_collatz(n/2);
    return 1 + tamanho_collatz(3*n + 1);
}

int main(){
    int n;
    scanf("%d", &n);
    collatz(n);
    printf("\ntamanho: %d", tamanho_collatz(n));
}