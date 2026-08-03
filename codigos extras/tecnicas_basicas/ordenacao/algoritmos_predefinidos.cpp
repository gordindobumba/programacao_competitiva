#include <bits/stdc++.h>

using namespace std;

// Struct de comparação de coordenadas; a ordenação prioriza x e depois y
struct P {
    int x, y;
    bool operator<(const P &p) {
        if (x != p.x) return x < p.x;
        else return y < p.y;
    }
};

// Função de comparação de strings para chamar no método sort()
bool comp(string a, string b) {
    if (a.size() != b.size()) return a.size() < b.size();
    return a < b;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    // Ordenação de vetores
    vector<int> v = {4,2,5,3,5,8,3};
    sort(v.begin(),v.end());
    // v -> 2,3,3,4,5,5,8

    // Ordenação decrescente
    sort(v.rbegin(),v.rend());
    // v -> 8,5,5,4,3,3,2

    // Ordenação de array
    int n = 7; // Tamanho do array
    int a[] = {4,2,5,3,5,8,3};
    sort(a,a+n);
    // a -> 2,3,3,4,5,5,8

    // Ordenação de string, baseado em valor ASCII
    string s = "monkey";
    sort(s.begin(), s.end());
    // monkey -> ekmnoy

    // Ordenação de pares, priorizando o primeiro elemento e depois o segundo
    vector<pair<int,int>> vp;
    vp.push_back({1,5});
    vp.push_back({2,3});
    vp.push_back({1,2});
    sort(vp.begin(), vp.end());
    // vp -> {1,2},{1,5},{2,3}

    // Ordenação de tuplas, mesmo conceito de pares mas com um terceiro número
    vector<tuple<int,int,int>> vt;
    vt.push_back({2,1,4});
    vt.push_back({1,5,3});
    vt.push_back({2,1,3});
    sort(vt.begin(), vt.end());
    // vt -> {1,5,3}, {2,1,3}, {2,1,4}

    // Ordenação de vetor de strings, usando a função comp definida fora da main
    vector<string> vs = {"maca", "banana", "kiwi", "abacaxi", "melao"};
    sort(vs.begin(), vs.end(), comp);
    // vs -> kiwi, maca, melao, banana, abacaxi
}