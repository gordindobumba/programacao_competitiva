#include <bits/stdc++.h>
using namespace std;

// algoritmo de euclides (mdc)

// esse algoritmo vem do fato que mdc(a, b) = mdc(b, a - b)
// para o algoritmo funcionar, iremos assumir que a >= b

// complexidade = O(log b)
int mdc(int a, int b){
    if(b == 0) return a;
    return mdc(b, a % b);
}

// o calculo eficiente de mmc(a, b) é (a * b)/mdc(a, b)
// tem que ter cuidado porque a*b pode causar overflow

// complexidade = O(log min(a, b))

int mmc(int a, int b){
    return (a * b)/mdc(max(a, b), min(a, b));
}