#include <bits/stdc++.h>
using namespace std;

int ajuste(int n, int m){
    return min(n, m - n + 1);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    while(n--){
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        x = ajuste(x + 1, a);
        y = ajuste(y + 1, b);

        cout << max(a * (b - y), b * (a - x)) << '\n';
    }
}