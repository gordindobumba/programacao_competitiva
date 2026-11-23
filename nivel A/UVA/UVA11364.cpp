#include <bits/stdc++.h>
using namespace std;

void test(){
    freopen("input.txt", "r", stdin);
    freopen("myout.txt", "w", stdout);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, x; cin >> t;
    double m;
    int menor, maior;
    while(t--){
        cin >> n;
        menor = 100, maior = -1;
        for(int i = 0; i < n; i++){
            cin >> x;
            maior = max(maior, x);
            menor = min(menor, x);
        }

        m = (menor + maior) / 2.0;
        int res = (double) (maior - m) * 4;
        cout << res << '\n';
    }
}