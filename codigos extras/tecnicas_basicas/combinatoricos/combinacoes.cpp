#include <bits/stdc++.h>
using namespace std;

vector<int> combinacao;
int n = 20, m = 4, cnt = 0;

void combinacoes(int i = 0, int val_anterior = 0){
    if(i == m){
        cnt++; // quando terminar 
        // pode operar na combinacao aqui
    }

    for(int j = val_anterior + 1; j <= n; j++){
        combinacao.push_back(j);
        combinacoes(i + 1, j);
        combinacao.pop_back();
    }
}

int combinacoes_recorrencia(int n, int k){
    if(k == 1 || k == 0) return 1;
    return combinacoes_recorrencia(n - 1, k - 1) + combinacoes_recorrencia(n - 1, k);
}

int main(){
    combinacoes();
    cout << cnt << '\n';
}