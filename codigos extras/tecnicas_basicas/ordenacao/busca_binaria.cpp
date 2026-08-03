#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n = 8;
    int array[n] = {2, 4, 7, 3, 10, 1, 8, 11};

    int x = 7;

    // Busca linear (O(n)), usado geralmente para vetores não ordenados
    for (int i = 0; i < n; i++) {
        if (array[i] == x) {
        // x encontrado em index i
        }
    }

    sort(array, array + n);

    // Busca binária (O(log n)), bem mais eficiente que busca linear quando o vetor é ordenado
    
    // Método 1: dividir o vetor até achar x
    int a = 0, b = n-1;
    while (a <= b) {
        int k = (a+b)/2;
        if (array[k] == x) {
        // x encontrado em index k
        }
        if (array[k] > x) b = k-1;
        else a = k+1;
    }

    // Método 2: fazer "pulos" progessivamente menores até achar x
    int k = 0;
    for (b = n/2; b >= 1; b /= 2) {
        while (k+b < n && array[k+b] <= x) k += b;
    }
    if (array[k] == x) {
        // x encontrado em index k
    }

    // Funções em C++ que implementam busca binária: 
    // lower_bound (ponteiro no menor valor igual ou perto de x),
    // upper_bound (ponteiro no menor valor maior que x),
    // equal_bound (ambos os ponteiros)
    
    // Retorna posição de x, se x existir no vetor  
    auto l = lower_bound(array, array + n, x) - array;
    if (l < n && array[l] == x) {
        // x encontrado em index a
    }

    // Retorna quantos elementos são iguais a x
    auto t = lower_bound(array, array + n, x);
    auto u = upper_bound(array, array+n, x);
    cout << u-t << "\n";

    // Faz a mesma coisa do código anterior, mas com equal_range
    auto r = equal_range(array, array+n, x);
    cout << r.second-r.first << "\n";

}