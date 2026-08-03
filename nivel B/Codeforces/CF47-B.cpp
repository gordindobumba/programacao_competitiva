#include <bits/stdc++.h>
using namespace std;

map<char, int> visitado;
map<char, vector<char>> adj;
vector<char> posicoes;

bool cycle = false;

void top_sort(char c){
    visitado[c] = 1;
    for(int i = 0; i < (int)adj[c].size(); i++){
        char filho = adj[c][i];
        if(visitado[filho] == 1){
            cycle = true;
            return;
        }
        
        if(!visitado[filho]) top_sort(filho);
    }
    visitado[c] = 2;
    posicoes.push_back(c);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    for(int i = 0; i < 3; i++){
        cin >> str;
        char c1 = str[0], c2 = str[2], comp = str[1];
        if(comp == '>') adj[c1].push_back(c2);
        else adj[c2].push_back(c1);
    }

    string coins = "ABC";
    for(int i = 0; i < 3; i++){
        if(!visitado[coins[i]]) top_sort(coins[i]);
    }

    if(!cycle){
        for(char c : posicoes) cout << c;
    }else cout << "Impossible";
}