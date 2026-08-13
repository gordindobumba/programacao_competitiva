#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> divida(101, 0), recibo(101, 0);
    int n, m; cin >> n >> m;
    for(int i = 0; i < m; i++){
        int a, b, w; cin >> a >> b >> w;
        divida[a] += w;
        recibo[b] += w;
    }

    int res = 0;
    for(int i = 1; i <= n; i++){
        if(recibo[i] < divida[i])
            res += divida[i] - recibo[i];
    }

    cout << res;
}