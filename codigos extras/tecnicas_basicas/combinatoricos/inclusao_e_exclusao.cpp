#include <bits/stdc++.h>

using namespace std;

int primos[4] = {2, 3, 5, 7};
int n;

// Recursividade

int inc_exc(int idx = 0, int d = 1, int sinal = -1){
    if(idx == 4){
        if(d == 1) return 0;
        return sinal * n / d;
    }
    return inc_exc(idx + 1, d, sinal) + inc_exc(idx + 1, d * primos[idx], sinal * -1);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    int cnt1 = 0;

    // Força bruta (n interacoes)

    for(int i = 1; i <= n; i++){
        if(i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0){
            ++cnt1;
        }
    }

    cout << "forca bruta: " << cnt1 << '\n';

    // Programação dinâmica (16 iteracoes)

    int cnt2 = 0;
    for(int i2 = 0; i2 < 2; ++i2){
        for(int i3 = 0; i3 < 2; ++i3){
            for(int i5 = 0; i5 < 2; ++i5){
                for(int i7 = 0; i7 < 2; ++i7){
                    int d = 1, elementos = 0;

                    if(i2) d *= 2, ++elementos;
                    if(i3) d *= 3, ++elementos;
                    if(i5) d *= 5, ++elementos;
                    if(i7) d *= 7, ++elementos;

                    if(elementos == 0) continue;

                    int sinal = elementos % 2 == 1 ? 1 : -1;
                    cnt2 += sinal * n / d;
                }
            }
        }
    }

    cout << "programacao dinamica: " << cnt2 << '\n';

    cout << "recursividade: " << inc_exc() << '\n';
}