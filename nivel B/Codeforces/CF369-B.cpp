#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k, l, r, sa, sk;
    cin >> n >> k >> l >> r >> sa >> sk;

    int res[1001] = {};
    int media = sk/k, uns = sk % k;
    for(int i = 0; i < k; i++){
        res[i] = media + (uns > 0 ? 1 : 0);
        uns--;
    }

    if(n > k){
        int sobra = sa - sk;
        uns = sobra % (n - k);
        media = sobra / (n - k);

        for(int i = k; i < n; i++){
            res[i] = media + (uns > 0 ? 1 : 0);
            uns--;
        }
    }

    for(int i = 0; i < n; i++)
        cout << res[i] << " ";
}