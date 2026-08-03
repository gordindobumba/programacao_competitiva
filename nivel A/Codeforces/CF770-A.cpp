#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string letras = "abcdefghijklmnopqrstuvwxyz";

    int n, k;
    cin >> n >> k;

    string senha = "a";
    unordered_set<char> letras_dif;
    letras_dif.insert('a');
    int i = 1;

    int s = 1;
    while(s < n){
        if(i == k){
            if(senha.back() == 'a') senha += 'b';
            else senha += 'a';
        }else{
            senha += letras[i];
            letras_dif.insert(letras[i]);
            i++;
        }
        s++;
    }

    cout << senha;
}