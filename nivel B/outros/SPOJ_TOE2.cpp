#include <bits/stdc++.h>
using namespace std;

bool terminou(string jogo){
    bool linhas = 
        (jogo[0] != '.' && jogo[0] == jogo[1] && jogo[1] == jogo[2]) ||
        (jogo[3] != '.' && jogo[3] == jogo[4] && jogo[4] == jogo[5]) ||
        (jogo[6] != '.' && jogo[6] == jogo[7] && jogo[7] == jogo[8]);
    
    bool colunas = 
        (jogo[0] != '.' && jogo[0] == jogo[3] && jogo[3] == jogo[6]) ||
        (jogo[1] != '.' && jogo[1] == jogo[4] && jogo[4] == jogo[7]) ||
        (jogo[2] != '.' && jogo[2] == jogo[5] && jogo[5] == jogo[8]);
    
    bool diagonais =
        (jogo[0] != '.' && jogo[0] == jogo[4] && jogo[4] == jogo[8]) ||
        (jogo[2] != '.' && jogo[2] == jogo[4] && jogo[4] == jogo[6]);
    
    return linhas || colunas || diagonais;
}

bool verificar(string jogo){
    for(int i = 0; i < 9; i++){
        if(jogo[i] == '.') return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string jogo; cin >> jogo;;
    while(jogo != "end"){
        string inicio = ".........", fim;
        queue<pair<string, bool>> q;
        q.push({inicio, 1});

        bool r = false;
        while((int)q.size()){
            string atual = q.front().first;
            bool jogador_atual = q.front().second;
            q.pop();

            if(atual == jogo){
                r = true;
                fim = atual;
                break;
            }

            if(terminou(atual)) continue;

            for(int i = 0; i < 9; i++){
                if(atual[i] == '.'){
                    atual[i] = (jogador_atual ? 'X' : 'O');
                    if(atual[i] == jogo[i]) q.push({atual, 1 ^ jogador_atual});
                    atual[i] = '.';
                }
            }
        }

        if(!r) cout << "invalid\n";
        else{
            if(terminou(fim) || verificar(fim)) cout << "valid\n";
            else cout << "invalid\n";
        }
        cin >> jogo;
    }
}