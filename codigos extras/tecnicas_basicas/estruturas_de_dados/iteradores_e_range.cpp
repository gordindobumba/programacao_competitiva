#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    // Um iterador é uma variável que aponta para um elemento em uma estrutura de dados

    vector<int> v;

    // Exemplos de iteradores são v.begin() e v.end()
    // { 3, 4, 6, 8, 12, 13, 14, 17 }
    //   ^                          ^
    //   |                          |
    //   v.begin()                  v.end()

    // A distância entre begin() e end() é chamada de range
    // C++ tem funções que usam range

    sort(v.begin(), v.end()); // Ordena elementos em um array
    reverse(v.begin(), v.end()); // Inverte a ordem dos elementos no array
    random_shuffle(v.begin(), v.end()); // Bagunça os elementos no array

    int n = 10;
    int a[n];

    // Essas funções também funcionam com arrays normais, usando ponteiros ao invés de iteradores

    sort(a, a + n);
    reverse(a, a + n);
    random_shuffle(a, a + n);

    
    // Iteradores de set

    set<int> s;
    set<int>::iterator it = s.begin();
    // Ou somente auto it = s.begin();

    // Para imprimir um elemento apontado por um iterador em um set
    cout << *it << "\n";

    // Iteradores podem ser locomovidos usando ++ (próximo elemento) ou -- (elemento anterior)
    for (it = s.begin(); it != s.end(); it++) {
    cout << *it << "\n";
    }

    // Esse código imprime o maior elemento do set
    it = s.end(); it--;
    cout << *it << "\n";

    // A função find(x) encontra o elemento x em um set
    int x;
    it = s.find(x);
    if (it == s.end()) {
        // x não foi encontrado
    }

    // Esse código devolve o elemento mais perto de x
    it = s.lower_bound(x);
    if (it == s.begin()) {
    cout << *it << "\n";
    } else if (it == s.end()) {
    it--;
    cout << *it << "\n";
    } else {
    int a = *it; it--;
    int b = *it;
    if (x-b < a-x) cout << b << "\n";
    else cout << a << "\n";
    }
}