#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define sz(v) (v).size()
#define INF 1e9
#define pii pair<int, int>
#define MP make_pair
#define scan(i, v) for(int i = 0; i < (int)v.size(); i++)
#define PB push_back
#define all(v) ((v).begin()), ((v).end())
#define N 100

vi BFS(int s, vector<vector<int>>& adj){
    vi len(sz(adj), INF);
    queue<pii> q;
    q.push(MP(s, 0)), len[s] = 0;
    int atual, profu;

    while(!q.empty()){
        pii p = q.front(); q.pop();
        atual = p.first, profu = p.second;

        scan(i, adj[atual]){
            if(len[adj[atual][i]] == INF){ // Se não tiver visitado ainda
                q.push(MP(adj[atual][i], profu + 1));
                len[adj[atual][i]] = profu + 1;
            }
        }
    }

    return len;
}

vi BFSPath(int s, int d, vector<vector<int>>& adj){ // Se quisermos ver o caminho do nó inicial até um nó específico
    vi len(sz(adj), INF);
    vi pai(sz(adj), -1);
    queue<int> q;
    q.push(s), len[s] = 0;

    int profu = 0, atual = s, size = 1;
    bool continua = true;

    while(continua && !q.empty()){
        ++profu, size = q.size();
        while(continua && size--){
            atual = q.front(), q.pop();
            scan(i, adj[atual]){
                if(len[adj[atual][i]] == INF){
                    q.push(adj[atual][i]);
                    len[adj[atual][i]] = profu + 1;
                    pai[adj[atual][i]] = atual;
                }

                if(adj[atual][i] == d){ // Alvo encontrado
                    continua = false;
                    break;
                }
            }
        }
    }

    vi path;
    while(d != -1){
        path.PB(d);
        d = pai[d];
    }

    reverse(all(path));
    return path;
}

int main(){
    
    // O BFS (breadth-first research ou busca em largura) é um algoritmo mais complexo do que o DFS
    // Ele visita os nós com distância em ordem crescente, logo podemos calcular a distância entre o nó inicial e todos os outros nós
    // O nó inicial visita seus vizinhos imediatos, depois usa um dos vizinho e visita os seus vizinhos imediatos, e assim em diante
    
    // Sua complexidade também é O(n + m)

    /*----IMPLEMENTAÇÃO----*/

    // Sua implementação é mais difícil que a implementação do DFS, pois ele visita diferentes partes do grafo
    // Uma implementação comum é usar uma fila. A cada passo, o próximo nó da fila será processado
    vector<int> adj[N];
    queue<int> q;
    bool visitado[N];
    int distancia[N];
    // A fila q contém nós a serem processados, ordenados baseados em sua distância ao ponto inicial

    // Aqui está uma implementação:
    int x; // nó inicial
    visitado[x] = true;
    distancia[x] = 0;
    q.push(x);
    while(!q.empty()){
        int s = q.front(); q.pop();
        // insira operações no nó s aqui
        for(auto u : adj[s]){
            if(visitado[u]) continue;
            visitado[u] = true;
            distancia[u] = distancia[s] + 1;
            q.push(u);
        }
    }
}