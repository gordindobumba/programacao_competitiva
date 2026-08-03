#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int vp, vd, t, f, c;
    cin >> vp >> vd >> t >> f >> c;

    double d = vp * t;
    int res = 0;
    if(vp < vd){
        while(d <= c){
            d += (d/(vd - vp)) * vp;
            if(abs(d - c) <= 1e-9 || d > c) break;
            res += 1;
            d += vp*((d/vd) + f);
        }
    }

    cout << res;
}