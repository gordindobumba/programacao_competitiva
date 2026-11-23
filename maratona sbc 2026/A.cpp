#include <bits/stdc++.h>
using namespace std;

#define loop(j, v) for(int i = j; i < v; i++)

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int v1[n], v2[n];

    loop(0, n) cin >> v1[i] >> v2[i];
    
    vector<int> prefix1(n), prefix2(n);
    prefix1[0] = v1[0];
    prefix2[0] = v2[0];
    loop(1, n){
        prefix1[i] = prefix1[i - 1] + v1[i];
        prefix2[i] = prefix2[i - 1] + v2[i];
    }
    
    int q; cin >> q;
    int x, num;
    while(q--){
        cin >> x;
        x -= 1;
        num = prefix1[x] - prefix2[x];
        if(num > 0) cout << "COMPRA\n";
        else if(num == 0) cout << "NEUTRO\n";
        else cout << "VENDA\n";
    }
}