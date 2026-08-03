#include <bits/stdc++.h>
using namespace std;
#define INF 1e9

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m; cin >> n >> m;
    int v[2]; cin >> v[0] >> v[1];
    int k; cin >> k;

    long long res = 0;

    for(int i = 0; i < k; i++){
        int k1, k2; cin >> k1 >> k2;
        int p1, p2;

        if(k1 > 0) p1 = trunc((n - v[0])/k1);
        else if(k1 < 0) p1 = trunc((v[0] - 1)/(-1*k1));
        else p1 = INF;

        if(k2 > 0) p2 = trunc((m - v[1])/k2);
        else if(k2 < 0) p2 = trunc((v[1] - 1)/(-1*k2));
        else p2 = INF;

        int q = min(p1, p2);
        res += q;
        v[0] += k1 * q;
        v[1] += k2 * q;
    }

    cout << res;
}