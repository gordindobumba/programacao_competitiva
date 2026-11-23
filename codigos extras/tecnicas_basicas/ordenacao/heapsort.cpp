#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int> &v, int i){
    int esq = 2*i, dir = 2*i + 1, maior;

    if(esq <= v[0] && v[esq] > v[i]) maior = esq;
    else maior = i;

    if(dir <= v[0] && v[dir] > v[maior]) maior = dir;
    
    if(maior != i){
        swap(v[maior], v[i]);
        heapify(v, maior);
    }
}

void build_heap(vector<int> &v){
    for(int i = v[0]/2; i >= 1; i--)
        heapify(v, i);
}

void heapsort(vector<int> &v){
    build_heap(v);
    while(v[0] > 0){
        swap(v[v[0]], v[1]);
        v[0]--;
        heapify(v, 1);
    }
}

int main(){
    vector<int> v = {0, 5, 2, 1, 4, 7, 6, 8, 10, 9, 3};
    int n = v.size() - 1;
    v[0] = n;
    heapsort(v);

    for(int i = 1; i <= n; i++){
        cout << v[i] << " ";
    }
}