#include <bits/stdc++.h>
using namespace std;

struct aresta{
    int a, b, w;
    bool operator<(const aresta& ar) {
        return w < ar.w;
    }
};

vector<int> pai;
vector<bool> aresta_usada, disponivel;
vector<aresta> arestas;
int n, m;

int achar(int x){
    if(pai[x] == -1) return x;
    return pai[x] = achar(pai[x]);
}

bool unir_arestas(int x, int y){
    x = achar(x);
    y = achar(y);
    if(x != y) pai[x] = y;
    return x != y;
}

int agm(bool og){
    pai.assign(n + 1, -1);
    int florestas = n, a, b, w, custo = 0;

    for(int i = 0; i < (int)arestas.size(); i++){
        if(disponivel[i]){
            a = arestas[i].a;
            b = arestas[i].b;
            w = arestas[i].w;
            if(unir_arestas(a, b)){
                if(og) aresta_usada[i] = 1;
                florestas--;
                custo += w;
            }
        }
    }

    if(florestas == 1) return custo;
    return INT_MAX;
}

int agm2(){
    int menor = INT_MAX, temp;
    for(int i = 0; i < m; i++){
        if(aresta_usada[i]){
            disponivel[i] = 0;
            temp = agm(0);
            menor = min(menor, temp);
            disponivel[i] = 1;
        }
    }

    return menor;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        cin >> n >> m;
        arestas.clear();
        int a, b, w;
        for(int i = 0; i < m; i++){
            cin >> a >> b >> w;
            arestas.push_back({a, b, w});
        }

        sort(arestas.begin(), arestas.end());
        aresta_usada.assign(m, 0);
        disponivel.assign(m, 1);

        int res1 = agm(1);
        int res2 = agm2();
        cout << res1 << " " << res2 << '\n';
    }
}