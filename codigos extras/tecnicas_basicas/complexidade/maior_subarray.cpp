#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int best = 0;
    int array[8] = {-1, 2, 4, -3, 5, 2, -5, 2};
    int n = 8;

    // Algoritmo 1, complexidade: O(n^3)

    auto inicio = chrono::steady_clock::now();

    for(int a = 0; a < n; a++){
        for(int b = a; b < n; b++){
            int soma = 0;
            for(int k = a; k <= b; k++){
                soma += array[k];
            }
            best = max(best, soma);
        }
    }

    auto fim = chrono::steady_clock::now();

    auto tempo = chrono::duration_cast<chrono::nanoseconds>(fim - inicio);

    cout << "algoritmo 1: " << best << "\ntempo: " << tempo.count() << " nanosegundos\n\n";

    
    // Algoritmo 2, complexidade: O(n^2)

    inicio = chrono::steady_clock::now();

    best = 0;
    for (int a = 0; a < n; a++) {
        int soma = 0;
        for (int b = a; b < n; b++) {
            soma += array[b];
            best = max(best,soma);
        }
    }

    fim = chrono::steady_clock::now();

    tempo = chrono::duration_cast<chrono::nanoseconds>(fim - inicio);

    cout << "algoritmo 2: " << best << "\ntempo: " << tempo.count() << " nanosegundos\n\n";

    
    // Algoritmo 3, complexidade: O(n)

    inicio = chrono::steady_clock::now();

    best = 0;
    int soma = 0;
    for (int k = 0; k < n; k++) {
        soma = max(array[k], soma + array[k]);
        best = max(best, soma);
    }

    fim = chrono::steady_clock::now();

    tempo = chrono::duration_cast<chrono::nanoseconds>(fim - inicio);

    cout << "algoritmo 3: " << best << "\ntempo: " << tempo.count() << " nanosegundos\n\n";
}