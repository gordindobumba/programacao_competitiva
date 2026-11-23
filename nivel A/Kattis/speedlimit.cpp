#include <bits/stdc++.h>
using namespace std;

void test(){
    freopen("input.txt", "r", stdin);
    freopen("myout.txt", "w", stdout);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x, y, res, ant;
    while(cin >> n && n != -1){
        res = 0;
        ant = 0;
        for(int i = 0; i < n; i++){
            cin >> x >> y;
            res += x * (y - ant);
            ant = y;
        }

        cout << res << " miles\n";
    }
}