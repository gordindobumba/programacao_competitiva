#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int res = 0, blocos = 0, som = 0, x = 0;
    while(1){
        x++;
        blocos += x;
        som += blocos;
        if(som > n) break;
        res++;
    }
    cout << res;
}