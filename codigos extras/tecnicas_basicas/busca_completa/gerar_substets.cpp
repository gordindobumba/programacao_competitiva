#include <bits/stdc++.h>
using namespace std;

vector<int> subset;
int n = 3;

void search(int k){
    if(k == n){
        // insira operações no subset aqui
    }else{
        search(k + 1);
        subset.push_back(k + 1);
        search(k + 1);
        subset.pop_back();
    }
}

int main(){
    // Um problema comum é gerar subsets de um set de n elementos
    // Por exemplo, os subsets de {0, 1, 2} são {}, {0}, {1}, {2}, {0, 1}, {0, 2}, {1, 2}, {0, 1, 2}
    // Podemos gerar subsets de um set usando recursão ou manipulação de bits
    
    
    /* Método 1 */

    // Uma forma elegante de gerar subsets é usando recursão
    // Podemos criar uma função com um vetor subset que guarda todos os subsets do set {0, 1, ..., n - 1}
    // A função está na linha 4 (para começar a busca, chame search(0))


    /* Método 2 */

    // Podemos usar representação em bits para gerar subsets
    // Todo subset de n elementos pode ser representado por um numero binário de n dígitos, onde os 1s são os números do subset
    // Por exemplo: se n = 5, 11001 corresponde ao subset {0, 3, 4}
    
    // O código a seguir caminha pelos subsets de um set de n elementos
    
    for(int b = 0; b < (1<<n); b++){
        // insira operações no subset aqui
    }

    // O código a seguir mostra como podemos encontrar um subset que equivale a uma sequência de bits
    // Enquanto um subset é processado, o código cria um vetor que contém os elementos do subset
    
    for (int b = 0; b < (1<<n); b++) {
    vector<int> subset;
        for (int i = 0; i < n; i++) {
            if (b&(1<<i)) subset.push_back(i);
        }
    }

}