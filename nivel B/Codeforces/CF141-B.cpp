#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, x, y;
    cin >> a >> x >> y;
    if(y == 0 || abs(x) >= a || y % a == 0){
        cout << -1;
        return 0;
    }

    int nivel = (y / a) + 1, res;

    if(nivel == 1){
        if(abs(x) >= (a + 1) / 2) res = -1;
        else res = 1;
    }
    else if(nivel % 2){
        if(x == 0) res = -1;
        else{
            res = 4 + ((nivel - 3)/2) * 3;
            if(x < 0) res--;
        }
    }
    else{
        res = 2 + ((nivel - 2)/2) * 3;
        if(abs(x) >= (a + 1) / 2) res = -1;
    }

    cout << res;
}