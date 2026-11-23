#include <bits/stdc++.h>
using namespace std;

vector<int> d;

void f(int& k, int& m){
    for(int i = k; i <= m; i += k){
        d[i] = 1;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int v[4];
    for(int i = 0; i < 4; i++) cin >> v[i];

    int t; cin >> t;
    d.resize(t + 5, 0);

    for(int i = 0; i < 4; i++){
        f(v[i], t);
    }

    int res = 0;
    for(int i = 1; i <= t; i++){
        res += d[i];
    }

    cout << res;
}