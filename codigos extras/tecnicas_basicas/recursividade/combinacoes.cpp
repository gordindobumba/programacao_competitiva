#include <bits/stdc++.h>
using namespace std;

// Podemos calcular combinações recursivamente.
// A cada passo, pega ou não pega o elemento do conjunto.

int combinacoes(int n, int k){
    if(n == k || k == 0) return 1;

    int a = combinacoes(n - 1, k - 1);
    int b = combinacoes(n - 1, k);

    return a + b;
}

int main(){
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);
    printf("%d", combinacoes(n, k));
}