#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define loops(i, n, j, m) for(int i = 0; i < n; i++) for(int j = 0; j < m; j++)

void test(){
    freopen("input.txt", "r", stdin);
    freopen("myout.txt", "w", stdout);
}

int matrix1[105][105], matrix2[105][105], matrix3[105][105];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m; cin >> n >> m;
    loops(i, n, j, m){
        cin >> matrix1[i][j];
        matrix2[i][j] = 1;
    }

    loops(i, n, j, m){
        if(!matrix1[i][j]){
            for(int k = 0; k < m; k++) matrix2[i][k] = 0;
            for(int t = 0; t < n; t++) matrix2[t][j] = 0;
        }
    }

    loops(i, n, j, m){
        if(matrix2[i][j]){
            for(int k = 0; k < m; k++) matrix3[i][k] = 1;
            for(int t = 0; t < n; t++) matrix3[t][j] = 1;
        }
    }

    loops(i, n, j, m){
        if(matrix1[i][j] != matrix3[i][j]){
            cout << "NO";
            return 0;
        }
    }

    cout << "YES\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << matrix2[i][j] << " ";
        }
        cout << '\n';
    }
}