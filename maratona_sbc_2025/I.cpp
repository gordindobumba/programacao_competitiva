#include <bits/stdc++.h>
using namespace std;
#define INF 2e9

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    
    int soma = 0, dist, l = 0, r = INF, sinal = 1;
    int x1, y1; cin >> x1 >> y1;
    
    for(int i = 1; i < n; i++){
        int xi, yi; cin >> xi >> yi;
        
        dist = abs(xi - x1) + abs(yi - y1);
        soma += dist*sinal;
        sinal *= -1;
        if(i % 2 == 1) r = min(r, soma);
        else l = max(l, soma);

        x1 = xi;
        y1 = yi;
    }

    cout << (r > l + 1 ? r - 1 : -1) << '\n';
}