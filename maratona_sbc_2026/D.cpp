#include <bits/stdc++.h>
using namespace std;

typedef vector<vector<char>> vvc;
typedef vector<char> vc;
int n, m;

bool comparar(vvc a, vvc b){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if((a[i][j] == '.' && b[i][j] == '#') || (a[i][j] == '#' && b[i][j] == '.')) return false;
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    vector<bool> casos(7, false);
    
    vvc m1(n, vc(m));
    vvc m3(n, vc(m));
    vvc m5(n, vc(m));
    vvc m7(n, vc(m));
    vvc m2(n, vc(m));
    vvc m4(n, vc(m));
    vvc m6(n, vc(m));
    vvc m8(n, vc(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> m1[i][j];
            m3[n - i - 1][m - j - 1] = m1[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            m5[i][j] = m1[i][m - 1 - j];
            m7[n - i - 1][m - j - 1] = m5[i][j];
        }
    }

    casos[1] = comparar(m1, m3);
    casos[3] = comparar(m1, m5);
    casos[5] = comparar(m1, m7);

    if(n == m){
        for(int i = n - 1; i >= 0; i--){
            for(int j = 0; j < m; j++){
                m2[n - i - 1][j] = m1[j][i];
                m4[n - i - 1][j] = m1[n - j - 1][n - i - 1];
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                m6[i][j] = m2[i][m - 1 - j];
                m8[n - i - 1][m - j - 1] = m4[i][j];
            }
        }
        casos[0] = comparar(m1, m2);
        casos[2] = comparar(m1, m4);
        casos[4] = comparar(m1, m6);
        casos[6] = comparar(m1, m8);
    }

    int res = 1;
    for(int i = 0; i < 7; i++){
        if(casos[i]) res++;
    }

    cout << res << '\n';
}