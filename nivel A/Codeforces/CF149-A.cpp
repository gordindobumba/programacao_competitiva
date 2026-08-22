#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k; cin >> k;
    vector<int> meses(12);

    for(int i = 0; i < 12; i++){
        cin >> meses[i];
    }

    sort(meses.rbegin(), meses.rend());
    int soma = 0, q = 0, i = 0;
    bool valido = 1;
    while(soma < k){
        soma += meses[i];
        q++; i++;
        if(i == 12 && soma < k){
            valido = 0;
            break;
        }
    }

    cout << (valido ? q : -1);
}