#include <bits/stdc++.h>
using namespace std;

#define x 520

int main(){

    // Um problema guloso clássico é o problema da moeda
    int moedas[] = {1, 2, 5, 10, 20, 50, 100, 200};
    // Tendo uma lista de moedas ordenadas, verificar o mínimo de moedas para obter um valor x, se x for fazível
    // Ex.: x = 520 = 200 + 200 + 100 + 20

    // Podemos usar uma estratégia gulosa que sempre pega a maior moeda até passar de x, e depois vai para a próxima
    // Usando o set de moedas acima, essa estratégia é *garantida* de funcionar
    
    // Aqui está um algoritmo que faz esse cálculo:
    int n = sizeof(moedas)/sizeof(moedas[0]) - 1;
    int soma = 0, min = 0;
    for(int i = n; i >= 0; i--){
        while(soma + moedas[i] <= x){
            soma += moedas[i];
            ++min;
        }
        if(soma == x) break;
    }

    // Esse algoritmo, porém, não funciona para o caso geral
    // Um exemplo é se as moedas forem {1, 3, 4} e x = 6, o algoritmo vai dizer que o mínimo é 4 + 1 + 1 sendo que é 3 + 3
}