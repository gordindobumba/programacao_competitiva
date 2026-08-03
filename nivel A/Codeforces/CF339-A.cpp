#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string equacao;
    cin >> equacao;

    vector<int> numeros;

    for(char c: equacao){
        if(isdigit(c)){
            int n = c - '0';
            numeros.push_back(n);
        }
    }

    sort(numeros.begin(), numeros.end());

    if(numeros.size() == 1) cout << numeros[0];
    else{
        string eq2 = to_string(numeros[0]);
        int s = numeros.size();
        for(int i = 1; i < s; i++){
            eq2 = eq2 + '+' + to_string(numeros[i]);
        }
        cout << eq2;
    }
    
}