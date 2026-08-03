#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int fatorial(int n){
    vector<int> f(n + 1);
    f[1] = 1;
    for(int i = 2; i <= n; i++){
        f[i] = (f[i - 1] * i) % MOD;
    }

    return f[n];
}

int permutacoes_com_repeticao(int n, int c[], int s){
    int denominador = 1;

    for(int i = 0; i < s; i++){
        denominador *= fatorial(c[i]);
    }

    return fatorial(n)/denominador;
}

int main(){
    int n = 8;
    int c[2] = {2, 3};
    int s = sizeof(c)/sizeof(c[0]);
    cout << permutacoes_com_repeticao(n, c, s);
}