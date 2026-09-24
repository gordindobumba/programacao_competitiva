#include <bits/stdc++.h>
using namespace std;

const int INF = 0x3f3f3f3f;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, l, r, x;
    cin >> n >> l >> r >> x;

    int v[n];
    for(int i = 0; i < n; i++) cin >> v[i];

    int res = 0;
    for(int i = 0; i < (1 << n); i++){
        int menor = INF, maior = 0, q = 0, som = 0;
        for(int j = 0; j < n; j++){
            if(i & (1 << j)){
                q++;
                som += v[j];
                menor = min(menor, v[j]);
                maior = max(maior, v[j]);
            }
        }

        if((maior - menor) < x || (som < l) || (som > r) || (q < 2)) continue;
        res++;
    }

    cout << res;
}