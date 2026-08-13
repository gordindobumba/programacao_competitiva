#include <bits/stdc++.h>
using namespace std;

int distancia(int x1, int y1, int x2, int y2){
    return (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);
}

bool euclideano(pair<int, int> cadeira, pair<int, int> radiador, int raio){
    int dist = distancia(cadeira.first, cadeira.second, radiador.first, radiador.second);
    if(dist <= raio*raio) return true;
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<pair<int, int>> cadeiras;
    vector<pair<pair<int, int>, int>> radiadores;
    int x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;
    int coord1 = min(x1, x2);
    int coord2 = max(x1, x2);
    int coord3 = min(y1, y2);
    int coord4 = max(y1, y2);

    for(int i = coord1; i <= coord2; i++){
        if(i == coord1 || i == coord2){
            for(int j = coord3; j <= coord4; j++){
                cadeiras.push_back({i, j});
            }
        }
        else{
            cadeiras.push_back({i, coord3});
            cadeiras.push_back({i, coord4});
        }
    }

    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int a, b, r; cin >> a >> b >> r;
        radiadores.push_back({{a, b}, r});
    }

    int nao_alcanca = cadeiras.size();
    for(int i = 0; i < (int)cadeiras.size(); i++){
        for(int j = 0; j < (int)radiadores.size(); j++){
            if(euclideano(cadeiras[i], radiadores[j].first, radiadores[j].second)){
                nao_alcanca--;
                break;
            }
        }
    }

    cout << nao_alcanca;
}