#include <bits/stdc++.h>
using namespace std;

#define n 3
vector<int> permutacao;
bool escolhido[n];

void search(){
    if(permutacao.size() == n){
        for(int i = 0; i < n; i++){
            cout << permutacao[i];
        }
        cout << '\n';
    }else{
        for(int i = 0; i < n; i++){
            if(escolhido[i]) continue;
            escolhido[i] = true;
            permutacao.push_back(i);
            search();
            escolhido[i] = false;
            permutacao.pop_back();
        }
    }
}

int main(){

    // Agora vamos considerar o problema de gerar permutações de um set do tipo {0, 1, ... , n - 1}
    // Por exemplo, as permutações do set {0, 1, 2} são {0, 1, 2}, {0, 2, 1}, {1, 0, 2}, {1, 2, 0}, {2, 0, 1} e {2, 1, 0}
    // Similar ao problema de subsets, podemos usar recursividade ou iteratividade

    /* Método 1 */

    // Permutações, assim como subsets, podem ser gerados de forma recursiva
    // Iremos usar um vetor que cria os subsets, e um array escolhido[n] para verificar se o número já aparece ou não
    // A função de implementação está na linha 8

    /* Método 2 */

    // A livraria padrão do C++ contém a função next_permutation que calcula as permutações de um set
    // Podemos criar um vetor com os números de 0 a n - 1 e constantemente chamar a função para realizar operações
    vector<int> permutacao;
    for(int i = 0; i < n; i++) permutacao.push_back(i);
    do{
        // insira operações na permutação aqui
    }while(next_permutation(permutacao.begin(), permutacao.end()));
}