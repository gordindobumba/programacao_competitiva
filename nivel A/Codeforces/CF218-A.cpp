#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    int m = 2*n + 1;
    int t = 0;

    int numeros[m];
    for(int i = 0; i < m; i++) cin >> numeros[i];

    for(int i = 0; i < m; i++){
        if(i % 2 == 1 && k && (numeros[i] - 1) > numeros[i - 1] && (numeros[i] - 1) > numeros[i + 1]){
            numeros[i]--;
            k--;
        }
        if(t) cout << " ";
        t = 1;
        cout << numeros[i];
    }
}