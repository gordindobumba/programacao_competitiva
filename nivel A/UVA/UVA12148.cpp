#include <bits/stdc++.h>
using namespace std;

int m[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool dias_consecutivos(int d1, int m1, int y1, int d2, int m2, int y2){
    d2--;
    if(d2 == 0){
        m2--;
        if(m2 == 0){
            y2--;
            m2 = 12;
        }

        d2 = m[m2 - 1];
        
        bool letivo = (y2 % 4 == 0 && (y2 % 100 != 0 || y2 % 400 == 0));
        if(m2 == 2 && letivo) d2 = 29;
    }
    return d1 == d2 && m1 == m2 && y1 == y2;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, d1 = 0, m1 = 0, y1 = 0, c1 = 0;
    while(cin >> n && n != 0){
        int total = 0, qtd = 0;
        while(n--){
            int d2, m2, y2, c2;
            cin >> d2 >> m2 >> y2 >> c2;
            if(dias_consecutivos(d1, m1, y1, d2, m2, y2)){
                total += c2 - c1;
                qtd++;
            }
            d1 = d2;
            m1 = m2;
            y1 = y2;
            c1 = c2;
        }
        cout << qtd << " " << total << '\n';
    }
}