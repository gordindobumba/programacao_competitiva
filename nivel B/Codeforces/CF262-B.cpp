#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k; cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int menor = 10005, soma = 0;
    for(int i = 0; i < n; i++){
        if(v[i] < 0 && k > 0){
            v[i] *= -1;
            k--;
        }
        soma += v[i];
        menor = min(menor, v[i]);
    }

    if(k % 2 == 1) soma -= 2*menor;
    cout << soma;
}