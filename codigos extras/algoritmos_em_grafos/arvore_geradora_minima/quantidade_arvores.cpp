#include <bits/stdc++.h>
using namespace std;

const int EPS = 1e-9;

double determinante(vector<vector<double>> mat, int n){
    double det = 1.0;
    for(int i = 0; i < n; i++){
        int pivo = i;
        for(int j = i + 1; j < n; j++){
            if(fabs(mat[j][i]) > fabs(mat[pivo][i]))
                pivo = j;
        }

        if(fabs(mat[pivo][i]) < EPS) return 0;

        if(i != pivo){
            swap(mat[i], mat[pivo]);
            det *= -1;
        }

        det *= mat[i][i];

        for(int j = i + 1; j < n; j++){
            double fracao = mat[j][i] / mat[i][i];
            for(int k = i; k < n; k++){
                mat[j][k] -= fracao * mat[i][k];
            }
        }
    }

    return det;
}

int arvores_geradoras(vector<vector<int>> adj, int n){
    vector<vector<double>> lap(n, vector<double>(n, 0));

    for(int i = 0; i < n; i++){
        int grau = 0;
        for(int j = 0; j < n; j++){
            if(adj[i][j])
            grau++;
            if(i != j) lap[i][j] = -1;
        }

        lap[i][i] = grau;
    }

    vector<vector<double>> menor(n - 1, vector<double>(n - 1));

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            menor[i][j] = lap[i][j];
        }
    }

    return (int)round(determinante(menor, n - 1));
}