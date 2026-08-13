#include <bits/stdc++.h>
using namespace std;

vector<int> seq;
int existe = 1;

int mov_hanoi(int n, int origem, int destino, int aux){
    if(n == 0) return 0;
    if(seq[n - 1] == origem) return mov_hanoi(n - 1, origem, aux, destino);
    else if(seq[n - 1] == destino)
        return (1 << (n - 1)) + mov_hanoi(n - 1, aux, destino, origem);
    return existe = 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    seq.resize(n);
    for(int i = 0; i < n; i++){
        cin >> seq[i];
    }

    int res = mov_hanoi(n, 1, 2, 3);
    cout << (existe == 0 ? -1 : res);
}