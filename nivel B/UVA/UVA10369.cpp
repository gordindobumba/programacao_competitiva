#include <bits/stdc++.h>
using namespace std;

void test(){
    freopen("input.txt", "r", stdin);
    freopen("myout.txt", "w", stdout);
}

#define f first
#define s second

typedef struct aresta{
    int a, b;
    double w;
    bool operator<(const aresta& outro){
        return w < outro.w;
    }
}ar;

struct DSU{
    vector<int> rank, pai;
    int florestas;

    DSU(int n){
        rank.resize(n);
        pai.resize(n);
        florestas = n;
        for(int i = 0; i < n; i++){
            rank[i] = 1;
            pai[i] = i;
        }
    }

    int achar(int x){
        return (x == pai[x] ? x : achar(pai[x]));
    }

    void juntar(int u, int v){
        if(rank[u] > rank[v]) swap(u, v);

        pai[u] = v;
        if(rank[u] == rank[v]) rank[v]++;
    }

    bool unir_conjuntos(int u, int v){
        u = achar(u);
        v = achar(v);
        if(u != v){
            juntar(u, v);
            florestas--;
        }
        return u != v;
    }
};

double euclideano(int x1, int y1, int x2, int y2){
    return sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout << fixed << setprecision(2);

    int n, S, P; cin >> n;
    while(n--){
        cin >> S >> P;
        DSU dsu(P);
        vector<pair<int, pair<int, int>>> coords;
        for(int i = 0; i < P; i++){
            int a, b; cin >> a >> b;
            coords.push_back({i, {a, b}});
        }

        vector<aresta> v;
        priority_queue<double> pq_max;
        for(int i = 0; i < P; i++){
            for(int j = i + 1; j < P; j++){
                double w = euclideano(coords[i].s.f, coords[i].s.s, coords[j].s.f, coords[j].s.s);
                v.push_back({coords[i].f, coords[j].f, w});
            }
        }

        sort(v.begin(), v.end());
        
        for(int i = 0; i < (int)v.size(); i++){
            if(dsu.unir_conjuntos(v[i].a, v[i].b))
                pq_max.push(v[i].w);
        }

        for(int x = 2; x <= S; x++) pq_max.pop();

        cout << pq_max.top() << '\n';
    }
}