#include <bits/stdc++.h>
using namespace std;

// Se o tamanho do array for maior que 1, divide em 2
// Senão, o junta com outro array e o ordena
// Ordenação feita por divisão-e-conquista

void merge(vector<int>& v, int l, int m, int r){
    int s1 = m - l + 1;
    int s2 = r - m;

    vector<int> subarray_esq(s1), subarray_dir(s2);
    for(int i = 0; i < s1; i++)
        subarray_esq[i] = v[l + i];
    for(int j = 0; j < s2; j++) 
        subarray_dir[j] = v[m + 1 + j];

    // Aqui ocorre a ordenação
    int i = 0, j = 0, k = l;
    while(i < s1 && j < s2){
        if(subarray_esq[i] <= subarray_dir[j]){
            v[k] = subarray_esq[i];
            i++;
        }else{
            v[k] = subarray_dir[j];
            j++;
        }
        k++;
    }

    // Se algum subarray ainda tiver elementos sobrando, coloca no vetor
    while(i < s1){
        v[k] = subarray_esq[i];
        i++; k++;
    }

    while(j < s2){
        v[k] = subarray_dir[j];
        j++; k++;
    }
}

void mergesort(vector<int>& v, int l, int r){
    // Separação através de divisão binária
    if(l < r){
        int m = l + (r - l)/2;
        mergesort(v, l, m);
        mergesort(v, m + 1, r);
        merge(v, l, m, r);
    }
}

int main(){
    vector<int> vec = {5, 3, 7, 14, 10, 1, 2};
    int n = vec.size();
    mergesort(vec, 0, n - 1);
    for(auto x : vec){
        cout << x << " ";
    }
}