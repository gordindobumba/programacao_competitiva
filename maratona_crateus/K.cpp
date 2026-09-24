#include <bits/stdc++.h>
using namespace std;

int n, m;

bool valido(int i, int j){
    return i >= 0 && i < n && j >= 0 && j < m;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    int a, b; cin >> a >> b;
    vector<vector<int>> labirinto(n + 1, vector<int>(m + 1, 0));
    vector<vector<bool>> visitado(n + 1, vector<bool>(m + 1, false));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> labirinto[i][j];
        }
    }

    int i = a - 1, j = b - 1;

    while(true){
        visitado[i][j] = true;

        if(valido(i + 1, j) && !visitado[i + 1][j] && labirinto[i + 1][j]){
            ++i;
            continue;
        }
        if(valido(i, j + 1) && !visitado[i][j + 1] && labirinto[i][j + 1]){
            ++j;
            continue;
        }
        if(valido(i - 1, j) && !visitado[i - 1][j] && labirinto[i - 1][j]){
            --i;
            continue;
        }
        if(valido(i, j - 1) && !visitado[i][j - 1] && labirinto[i][j - 1]){
            --j;
            continue;
        }
        
        break;
    }

    cout << i + 1 << " " << j + 1 << '\n';
}