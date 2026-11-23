#include <bits/stdc++.h>
using namespace std;

void test(){
    freopen("input.txt", "r", stdin);
    freopen("myout.txt", "w", stdout);
}

struct DSU{
    vector<int> rank, pai, tamanho;

    DSU(int n){
        rank.resize(n);
        pai.resize(n);
        tamanho.resize(n);
        for(int i = 0; i < n; i++){
            rank[i] = 1;
            pai[i] = i;
            tamanho[i] = 1;
        }
    }

    int achar(int x){
        return (x == pai[x] ? x : achar(pai[x]));
    }

    void juntar(int u, int v){
        if(rank[u] > rank[v]) swap(u, v);

        pai[u] = v;
        if(rank[u] == rank[v]) rank[v]++;
        tamanho[v] += tamanho[u];
    }

    bool unir_conjuntos(int u, int v){
        u = achar(u);
        v = achar(v);
        if(u != v) juntar(u, v);
        return u != v;
    }
};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        map<string, int> pessoas;
        int i = 1;
        int n; cin >> n;
        DSU dsu(2*n + 1);
        string p1, p2;

        while(n--){
            cin >> p1 >> p2;
            if(!pessoas[p1]){
                pessoas[p1] = i;
                i++;
            }

            if(!pessoas[p2]){
                pessoas[p2] = i;
                i++;
            }

            dsu.unir_conjuntos(pessoas[p1], pessoas[p2]);
            cout << dsu.tamanho[dsu.achar(pessoas[p1])] << '\n';
        }
    }
}