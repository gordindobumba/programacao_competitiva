#include <bits/stdc++.h>
using namespace std;

bool valido(char c){
    return c != '.' && c != '!' && c != '?' && c != ',';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int e, o; cin >> e >> o;
    map<string, int> elogios, ofensas;
    for(int i = 0; i < e; i++){
        string el; cin >> el;
        elogios[el] =  1;
    }

    for(int i = 0; i < o; i++){
        string of; cin >> of;
        ofensas[of] = 1;
    }

    int c1 = 0, c2 = 0;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string frase; getline(cin, frase);
    frase += " ";

    int s = frase.size();
    string palavra = "";
    for(int i = 0; i < s; i++){
        char c = frase[i];
        if(c == ' '){
            if(elogios[palavra] == 1) c1++;
            else if(ofensas[palavra] == 1) c2++;
            palavra = "";
        }
        else if(valido(c)) palavra += c;
    }

    int res = c1 - c2;
    if(res > 0) cout << "perto";
    else if(res < 0) cout << "longe";
    else cout << "indeterminado";

    cout << '\n';
}