#include <bits/stdc++.h>
using namespace std;

void testar(){
    freopen("input.txt", "r", stdin);
    freopen("myout.txt", "w", stdout);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cout << fixed << setprecision(2);

    double n; cin >> n;
    int valor = n * 100;

    int moedas[12] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};
    vector<int> res;

    for(int i = 0; i < 12; i++){
        res.push_back(valor / moedas[i]);
        valor %= moedas[i];
    }

    cout << "NOTAS:\n";
    for(int i = 0; i < 6; i++){
        cout << res[i] << " nota(s) de R$ " << (double) moedas[i] / 100.0 << '\n';
    }

    cout << "MOEDAS:\n";
    for(int i = 6; i < 12; i++){
        cout << res[i] << " moeda(s) de R$ " << (double) moedas[i] / 100.0 << '\n';
    }
}