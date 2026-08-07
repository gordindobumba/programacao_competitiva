#include <bits/stdc++.h>
using namespace std;

// Dada uma quantidade n de números, haverá n - 1 operações entre eles, que podem ser somente soma ou subtração.
// Exemplo: 
// 17 + 13 - 20 + 5 = -5
// 17 - 13 + 20 - 5 = 19
// Tentaremos fazer um programa que, dado um valor k, determine se a soma é divisível por k (soma % k = 0).

int k;
int n;
vector<int> v(n);
#define MAX 100

bool recursivo_sem_salvar(int i, int soma){
    if(i == n){
        return soma % k == 0;
    }

    if(recursivo_sem_salvar(i + 1, soma + v[i]) || recursivo_sem_salvar(i + 1, soma - v[i])) return true;
    return false;
}

vector<vector<int>> mem(MAX, vector<int>(MAX, -1));

int modulo_k(int n){
   return (n % k + k) % k;
}

bool recursivo_salvando(int i, int soma){
    int &pont = mem[i][soma];
    if(pont != -1) return pont;
    if(i == n) return pont = soma == 0;

    if(recursivo_salvando(i + 1, modulo_k(soma + v[i])) || recursivo_salvando(i + 1, modulo_k(soma - v[i])))
        return pont = 1;
    return pont = 0;
}