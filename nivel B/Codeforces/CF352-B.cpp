#include <bits/stdc++.h>
using namespace std;

bool pa(vector<int> n){
    int diff = n[1] - n[0];
    for(int i = 2; i < (int)n.size(); i++){
        if(n[i] - n[i - 1] != diff) return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    vector<vector<int>> posicoes;
    posicoes.resize(100005);
    
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        posicoes[a].push_back(i);
    }

    int t = 0;
    vector<pair<int, int>> validos;

    for(int i = 1; i <= 100000; i++){
        if(posicoes[i].size() == 0) continue;

        if(posicoes[i].size() == 1) validos.push_back({i, 0});
        else if(posicoes[i].size() == 2) validos.push_back({i, posicoes[i][1] - posicoes[i][0]});
        else{
            if(!pa(posicoes[i])) continue;
            else validos.push_back({i, posicoes[i][1] - posicoes[i][0]});
        }
        t++;
    }

    cout << t << '\n';
    for(auto x : validos){
        cout << x.first << " " << x.second << '\n';
    }
}