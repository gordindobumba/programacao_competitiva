#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> grid;
int n;

bool valid(int i, int j){
    return i >= 0 && j >= 0 && i < n && j < n;
}

int maior_caminho(int i, int j){
    if(!valid(i, j)) return 0;
    if(i == n - 1 && j == n - 1) return grid[i][j];

    int caminho1 = maior_caminho(i + 1, j);
    int caminho2 = maior_caminho(i, j + 1);

    return grid[i][j] + max(caminho1, caminho2);
}

int main(){
    n = 4;
    grid.resize(n, vector<int>(n));
    srand(time(0));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            grid[i][j] = rand() % 9 + 1;
            cout << grid[i][j] << " ";
        }
        cout << '\n';
    }

    cout << "maior caminho: " << maior_caminho(0, 0);
}